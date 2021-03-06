
include_directories(
	${CMAKE_SOURCE_DIR}
	${CMAKE_SOURCE_DIR}/BaseLib
	${CMAKE_SOURCE_DIR}/FileIO
	${CMAKE_SOURCE_DIR}/FileIO/Legacy
	${CMAKE_SOURCE_DIR}/GeoLib
	${CMAKE_SOURCE_DIR}/MathLib
	${CMAKE_SOURCE_DIR}/MeshLib
	${CMAKE_SOURCE_DIR}/Gui/VtkVis
)

if(TARGET VtkVis)

	add_executable(generateStructuredQuadMesh generateStructuredQuadMesh.cpp)
	set_target_properties(generateStructuredQuadMesh PROPERTIES FOLDER Utils)
	target_link_libraries(generateStructuredQuadMesh
		MeshLib
		FileIO
		GeoLib
		MathLib
		VtkVis
		${CATALYST_LIBRARIES}
		${QT_LIBRARIES}
	)
	ADD_CATALYST_DEPENDENCY(generateStructuredQuadMesh)

	add_executable(createMeshElemPropertiesFromASCRaster createMeshElemPropertiesFromASCRaster.cpp)
	set_target_properties(createMeshElemPropertiesFromASCRaster PROPERTIES FOLDER Utils)
	target_link_libraries(createMeshElemPropertiesFromASCRaster
		MeshLib
		FileIO
		VtkVis
		zlib
		${CATALYST_LIBRARIES}
		${QT_LIBRARIES}
	)
	ADD_CATALYST_DEPENDENCY(createMeshElemPropertiesFromASCRaster)

endif() # VtkVis-target is existing


add_executable(generateStructuredMesh generateStructuredMesh.cpp)
target_link_libraries(generateStructuredMesh
	BaseLib
	FileIO
	MathLib
	MeshLib
)
set_target_properties(generateStructuredMesh PROPERTIES FOLDER Utilities)

