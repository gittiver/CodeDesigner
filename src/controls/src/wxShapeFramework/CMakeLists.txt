
set(LIB_wxsf_SOURCES
		ArrowBase.cpp
		AutoLayout.cpp
		BitmapShape.cpp
		BitmapShapeXml.cpp
		CanvasHistory.cpp
		CanvasState.cpp
		CircleArrow.cpp
		CircleShape.cpp
		CommonFcn.cpp
		ControlShape.cpp
		CurveShape.cpp
		DiagramManager.cpp
		DiamondArrow.cpp
		DiamondShape.cpp
		EditTextShape.cpp
		EllipseShape.cpp
		FixedRectShape.cpp
		FlexGridShape.cpp
		GridShape.cpp
		LineShape.cpp
		MultiSelRect.cpp
		OpenArrow.cpp
		OrthoShape.cpp
		PolygonShape.cpp
		PolygonShapeXml.cpp
		Printout.cpp
		RectShape.cpp
		RoundOrthoShape.cpp
		RoundRectShape.cpp
		SFEvents.cpp
		ScaledDC.cpp
		ShapeBase.cpp
		ShapeBaseXml.cpp
		ShapeCanvas.cpp
		ShapeDataObject.cpp
		ShapeDockpoint.cpp
		ShapeHandle.cpp
		SolidArrow.cpp
		TextShape.cpp
		TextShapeXml.cpp
		Thumbnail.cpp
		wxxmlserializer/PropertyIO.cpp		wxxmlserializer/XmlSerializer.cpp
)
add_library(wxsf SHARED ${LIB_wxsf_SOURCES})
target_include_directories(wxsf
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include 
  PRIVATE .
)
target_compile_definitions(wxsf PRIVATE WXMAKINGDLL_WXSF WXMAKINGDLL_WXXS MONOLITHIC)
target_link_libraries(wxsf ${wxWidgets_LIBRARIES})
