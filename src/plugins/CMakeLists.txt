add_library(CodeLite SHARED codelite/CodeLite.cpp codelite/CodeLite.h)
target_link_libraries(CodeLite interfaces wxsf projectbase) 

add_library(DiagTest SHARED diagTest/DiagTest.cpp diagTest/DiagTest.h)
target_link_libraries(DiagTest interfaces wxsf projectbase) 

set(diagUML_res 
diagUml/res/SubSign.xpm
)

add_library(diagUml SHARED 
diagUml/DiagCD.h
diagUml/DiagUml.cpp
diagUml/shapes/ClassDiagram.h
diagUml/shapes/statechart/InitialItem.h
diagUml/shapes/statechart/DecisionItem.cpp
diagUml/shapes/statechart/ForkJoinHItem.h
diagUml/shapes/statechart/InitialItem.cpp
diagUml/shapes/statechart/DecisionItem.h
diagUml/shapes/statechart/StateItem.h
diagUml/shapes/statechart/FinalItem.cpp
diagUml/shapes/statechart/EntryItem.h
diagUml/shapes/statechart/ForkJoinVItem.h
diagUml/shapes/statechart/SimpleStateItem.cpp
diagUml/shapes/statechart/StateItem.cpp
diagUml/shapes/statechart/FinalItem.h
diagUml/shapes/statechart/SubStateItem.cpp
diagUml/shapes/statechart/ForkJoinHItem.cpp
diagUml/shapes/statechart/HistoryItem.cpp
diagUml/shapes/statechart/TransitionItem.cpp
diagUml/shapes/statechart/EntryItem.cpp
diagUml/shapes/statechart/SimpleStateItem.h
diagUml/shapes/statechart/SubStateItem.h
diagUml/shapes/statechart/ExitItem.h
diagUml/shapes/statechart/TransitionItem.h
diagUml/shapes/statechart/ExitItem.cpp
diagUml/shapes/statechart/ForkJoinVItem.cpp
diagUml/shapes/statechart/HistoryItem.h
diagUml/shapes/classdiagram/ClassTemplItem.h
diagUml/shapes/classdiagram/BasicAggregItem.h
diagUml/shapes/classdiagram/ClassTemplItem.cpp
diagUml/shapes/classdiagram/TemplateBindItem.h
diagUml/shapes/classdiagram/IncludeAssocItem.cpp
diagUml/shapes/classdiagram/BasicAggregItem.cpp
diagUml/shapes/classdiagram/UniDirectAssocItem.h
diagUml/shapes/classdiagram/IncludeAssocItem.h
diagUml/shapes/classdiagram/TemplateBindItem.cpp
diagUml/shapes/classdiagram/EnumItem.cpp
diagUml/shapes/classdiagram/InheritanceItem.cpp
diagUml/shapes/classdiagram/CompAggregItem.h
diagUml/shapes/classdiagram/InheritanceItem.h
diagUml/shapes/classdiagram/BiDirectAssocItem.h
diagUml/shapes/classdiagram/ClassItem.h
diagUml/shapes/classdiagram/InterfaceItem.h
diagUml/shapes/classdiagram/BiDirectAssocItem.cpp
diagUml/shapes/classdiagram/EnumItem.h
diagUml/shapes/classdiagram/ClassItem.cpp
diagUml/shapes/classdiagram/UniDirectAssocItem.cpp
diagUml/shapes/classdiagram/InterfaceItem.cpp
diagUml/shapes/classdiagram/CompAggregItem.cpp
diagUml/shapes/SimpleStateChartDiagram.h
diagUml/shapes/SimpleStateChartDiagram.cpp
diagUml/shapes/StateChartDiagram.h
diagUml/shapes/StateChartDiagram.cpp
diagUml/shapes/ClassDiagram.cpp
diagUml/DiagSCH.cpp
diagUml/premake.lua
diagUml/DiagSCH.h
diagUml/gui/CompStateDialog.cpp
diagUml/gui/ClassTemplDialog.cpp
diagUml/gui/EnumDialog.h
diagUml/gui/RenameVirtualDialog.cpp
diagUml/gui/EnumElementDialog.h
diagUml/gui/ActionLinkDialog.cpp
diagUml/gui/SubStateDialog.h
diagUml/gui/CompStateDialog.h
diagUml/gui/ClassMemberLinkDialog.cpp
diagUml/gui/AggregationDialog.cpp
diagUml/gui/ClassTemplDialog.h
diagUml/gui/RenameVirtualDialog.h
diagUml/gui/ClassInstanceDialog.h
diagUml/gui/EnumElementDialog.cpp
diagUml/gui/DestructorDialog.h
diagUml/gui/AggregationDialog.h
diagUml/gui/EventDialog.cpp
diagUml/gui/AssignAsDialog.h
diagUml/gui/ConstructorDialog.h
diagUml/gui/FinalStateDialog.cpp
diagUml/gui/ActionTypeDialog.h
diagUml/gui/SubStateDialog.cpp
diagUml/gui/ClassDialog.cpp
diagUml/gui/GUI.h
diagUml/gui/SSCHDiagramDialog.cpp
diagUml/gui/CADialog.cpp
diagUml/gui/GUI.cpp
diagUml/gui/TransitionDialog.cpp
diagUml/gui/AssignAsDialog.cpp
diagUml/gui/ClassDialog.h
diagUml/gui/EventLinkDialog.cpp
diagUml/gui/ActionTypeDialog.cpp
diagUml/gui/EnumDialog.cpp
diagUml/gui/StateActionDialog.h
diagUml/gui/TransitionDialog.h
diagUml/gui/UMLDesignerAUI.fbp
diagUml/gui/StateActionDialog.cpp
diagUml/gui/EventLinkDialog.h
diagUml/gui/FinalStateDialog.h
diagUml/gui/ClassInstanceDialog.cpp
diagUml/gui/DestructorDialog.cpp
diagUml/gui/ActionLinkDialog.h
diagUml/gui/SSCHDiagramDialog.h
diagUml/gui/ConstructorDialog.cpp
diagUml/gui/ClassMemberLinkDialog.h
diagUml/gui/CADialog.h
diagUml/gui/EventDialog.h
diagUml/DiagCD.cpp
diagUml/DiagUml.h
diagUml/DiagIds.h
diagUml/DiagEvtHandlers.cpp
)
target_link_libraries(diagUml interfaces wxsf projectbase)

add_library(genUml SHARED 
genUml/classdiaggen/CPPClassAlgorithm.h
genUml/classdiaggen/CPPElementProcessors.h
genUml/classdiaggen/ClassDiagramGenerator.cpp
genUml/classdiaggen/PythonClassAlgorithm.h
genUml/classdiaggen/ClassDiagramGenerator.h
genUml/classdiaggen/PythonElementProcessors.h
genUml/classdiaggen/CPPClassAlgorithm.cpp
genUml/classdiaggen/PythonClassAlgorithm.cpp
genUml/classdiaggen/CPPElementProcessors.cpp
genUml/classdiaggen/PythonElementProcessors.cpp
genUml/classdiaggen/ClassAlgorithm.h
genUml/classdiaggen/ClassAlgorithm.cpp
genUml/GenUml.h
genUml/statechartgen/ElifAlgorithm.cpp
genUml/statechartgen/GTElementProcessors.h
genUml/statechartgen/EIElementProcessors.cpp
genUml/statechartgen/ElifAlgorithm.h
genUml/statechartgen/StateChartGenerator.h
genUml/statechartgen/LoopCaseAlgorithm.cpp
genUml/statechartgen/LoopCaseAlgorithm.h
genUml/statechartgen/StateChartOptimizer.h
genUml/statechartgen/HStateChartPreprocessor.cpp
genUml/statechartgen/HStateChartGenerator.cpp
genUml/statechartgen/LCElementProcessors.h
genUml/statechartgen/StateChartVerifier.cpp
genUml/statechartgen/GoToAlgorithm.h
genUml/statechartgen/StateChartElementProcessor.cpp
genUml/statechartgen/StateChartGenerator.cpp
genUml/statechartgen/StateChartOptimizer.cpp
genUml/statechartgen/GoToAlgorithm.cpp
genUml/statechartgen/LCElementProcessors.cpp
genUml/statechartgen/HStateChartPreprocessor.h
genUml/statechartgen/LCEITransitionProcessor.h
genUml/statechartgen/StateChartVerifier.h
genUml/statechartgen/EIElementProcessors.h
genUml/statechartgen/SStateChartGenerator.cpp
genUml/statechartgen/LCEITransitionProcessor.cpp
genUml/statechartgen/StateChartElementProcessor.h
genUml/statechartgen/SStateChartGenerator.h
genUml/statechartgen/HStateChartGenerator.h
genUml/statechartgen/GTElementProcessors.cpp
genUml/GenUml.cpp
)
target_link_libraries(genUml interfaces wxsf projectbase diagUml) 

add_library(revEng SHARED 
	revEng/RevEng.cpp revEng/RevEng.h
	revEng/gui/RevEngGUI.fbp
	revEng/gui/RevEngPanelFcns.cpp
	revEng/gui/RevEngPanel.cpp
	revEng/gui/GUI.h
	revEng/gui/GUI.cpp
	revEng/gui/RevEngPanel.h
	revEng/RevEng.h
)
target_link_libraries(revEng interfaces wxsf projectbase diagUml)
target_include_directories(revEng
  PRIVATE revEng .
)


