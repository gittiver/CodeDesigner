set(codedesigner_SOURCES 
Art.cpp
Art.h
CodeItemsTree.cpp
CodeItemsTree.h
DiagramBank.cpp
DiagramBank.h
Log.cpp
Log.h
PluginManager.cpp
PluginManager.h
ProjStructTree.cpp
ProjStructTree.h
Project.cpp
Project.h
ProjectManager.cpp
ProjectManager.h
ProjectTree.cpp
ProjectTree.h
Settings.cpp
Settings.h
UMLDesignerApp.cpp
UMLDesignerApp.h
UMLDesignerMain.cpp
UMLDesignerMain.h
XS2PG.cpp
XS2PG.h

shapes/NoteConnItem.h
shapes/NoteConnItem.cpp
shapes/GroupItem.h
shapes/GroupItem.cpp
shapes/NoteItem.h
shapes/NoteItem.cpp

codegen/PythonProjectGenerator.h
codegen/CProjectGenerator.h
codegen/CProjectGenerator.cpp
codegen/languages/CLanguage.h
codegen/languages/CPPLanguage.cpp
codegen/languages/PythonLanguage.h
codegen/languages/CPPLanguage.h
codegen/languages/PythonLanguage.cpp
codegen/languages/CLanguage.cpp
codegen/PythonProjectGenerator.cpp
codegen/base/ProjectGenerator.cpp
codegen/base/ProjectGenerator.h

gui/Editor.h
gui/SynchronizeDialog.cpp
gui/InsertFromBankDialog.cpp
gui/TabArt.cpp
gui/SynchronizeDialog.h
gui/DependenciesDialog.cpp
gui/DependenciesDialog.h
gui/ManageBankDialog.cpp
gui/TabArt.h
gui/SettingsDialog.cpp
gui/ManagePluginsDialog.h
gui/GUI.h
gui/DialogFunctions.cpp
gui/GUI.cpp
gui/ManagePluginsDialog.cpp
gui/Editor.cpp
gui/EditorPanel.cpp
gui/GroupDialog.cpp
gui/EditorPanel.h
gui/UMLDesignerAUI.fbp
gui/DialogFunctions.h
gui/ManageBankDialog.h
gui/InsertFromBankDialog.h
gui/GroupDialog.h
gui/SettingsDialog.h
gui/StoreToBankDialog.cpp
gui/StoreToBankDialog.h

)
set(ctags_SOURCES
  ctags/main.h
ctags/lisp.c
ctags/matlab.c
ctags/asp.c
ctags/args.c
ctags/c.c
ctags/eiffel.c
ctags/keyword.h
ctags/basic.c
ctags/debug.h
ctags/ctags.h
ctags/dosbatch.c
ctags/ant.c
ctags/verilog.c
ctags/jscript.c
ctags/slang.c
ctags/gnu_regex
ctags/gnu_regex/regexec.c
ctags/gnu_regex/regex.h
ctags/gnu_regex/regcomp.c
ctags/gnu_regex/regex_internal.c
ctags/gnu_regex/regex_internal.h
ctags/gnu_regex/regex.c
ctags/config.h
ctags/routines.h
ctags/vim.c
ctags/python.c
ctags/ruby.c
ctags/perl.c
ctags/general.h
ctags/lua.c
ctags/sort.c
ctags/strlist.c
ctags/parse.h
ctags/pascal.c
ctags/awk.c
ctags/get.c
ctags/options.h
ctags/rexx.c
ctags/entry.h
ctags/vstring.h
ctags/read.c
ctags/keyword.c
ctags/ocaml.c
ctags/debug.c
ctags/make.c
ctags/args.h
ctags/main.c
ctags/premake.lua
ctags/tcl.c
ctags/routines.c
ctags/cobol.c
ctags/flex.c
ctags/lregex.c
ctags/sh.c
ctags/vhdl.c
ctags/beta.c
ctags/html.c
ctags/yacc.c
ctags/erlang.c
ctags/sql.c
ctags/parsers.h
ctags/parse.c
ctags/sort.h
ctags/fortran.c
ctags/e_msoft.h
ctags/strlist.h
ctags/php.c
ctags/sml.c
ctags/tex.c
ctags/read.h
ctags/asm.c
ctags/vstring.c
ctags/get.h
ctags/scheme.c
ctags/entry.c
ctags/options.c
)
#plugins

# interfaces as interface librry for easier usage
add_library(interfaces INTERFACE)
target_sources(interfaces INTERFACE
  interfaces/Defs.h
  interfaces/IDiagram.h
  interfaces/IGenerator.h
  interfaces/IPlugin.h
  interfaces/IPluginManager.h
  interfaces/IProject.h
)
target_include_directories(interfaces INTERFACE .)

# lib projectbase
add_subdirectory(projectbase)

#codedesigner target

file(GLOB_RECURSE GUI_RESOURCE_FILES 
  LIST_DIRECTORIES false
  CONFIGURE_DEPENDS
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  res/gui/*.png res/gui/*.xpm
 )
file(GLOB_RECURSE ELEMENTS_RESOURCE_FILES 
  LIST_DIRECTORIES false
  CONFIGURE_DEPENDS
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  res/elements/s*.png res/elements/*.xpm
 )
file(GLOB_RECURSE PROJECT_RESOURCE_FILES 
  LIST_DIRECTORIES false
  CONFIGURE_DEPENDS
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  res/project/*.png res/project/*.xpm
  )

set(RESOURCE_FILES
  ${GUI_RESOURCE_FILES} ${ELEMENTS_RESOURCE_FILES} ${PROJECT_RESOURCE_FILES}
)  
message("resourcefiles:" ${RESOURCE_FILES})

add_executable(codedesigner WIN32 MACOSX_BUNDLE ${codedesigner_SOURCES} ${RESOURCE_FILES})
SET_SOURCE_FILES_PROPERTIES(${GUI_RESOURCE_FILES} PROPERTIES MACOSX_PACKAGE_LOCATION Resources/app/gui) 
SET_SOURCE_FILES_PROPERTIES(${ELEMENTS_RESOURCE_FILES} PROPERTIES MACOSX_PACKAGE_LOCATION Resources/app/elements) 
SET_SOURCE_FILES_PROPERTIES(${PROJECT_RESOURCE_FILES} PROPERTIES MACOSX_PACKAGE_LOCATION Resources/app/project) 
target_include_directories(codedesigner PRIVATE .)
target_link_libraries(codedesigner libwxsf interfaces projectbase)

install(TARGETS codedesigner
    BUNDLE DESTINATION . COMPONENT Runtime
    RUNTIME DESTINATION bin COMPONENT Runtime
)
