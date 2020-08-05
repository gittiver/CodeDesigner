#!/bin/sh

HOST_SYSTEM=`uname -s`
HOST_ARCH=`uname -m`
STARTDIR=`pwd`
PROJECTNAME=codedesigner

CMAKE_BUILDDIR=build-$HOST_ARCH-$HOST_SYSTEM

mkdir -p $CMAKE_BUILDDIR

cd $CMAKE_BUILDDIR

if [ "$HOST_SYSTEM" = "Linux" ] 
then 
cmake -D${PROJECTNAME}_WITH_DOCS:bool=ON \
      ..

cmake --build . --target all
#cmake --build . --target test
cmake --build . --target package 
cmake --build . --target package_source
cd $STARTDIR

else 

WXDIR=$STARTDIR/../wxWidgets/3.1.3

cmake -D${PROJECTNAME}_WITH_DOCS:bool=ON \
      -DwxWidgets_CONFIG_EXECUTABLE:FILEPATH=$WXDIR/build-cocoa-debug/wx-config \
      ..

cmake --build . --parallel 8  --target all
#cmake --build . --target test
cmake --build . --target package 
cmake --build . --target package_source
cd $STARTDIR

mkdir -p build-Xcode-$HOST_SYSTEM
cd build-Xcode-$HOST_SYSTEM
cmake -D${PROJECTNAME}_WITH_DOCS:bool=ON \
      -DwxWidgets_CONFIG_EXECUTABLE:FILEPATH=$WXDIR/build-cocoa-debug/wx-config \
      -G Xcode ..
cd $STARTDIR

fi

