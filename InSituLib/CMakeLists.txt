include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/../GeoLib
	${CMAKE_CURRENT_SOURCE_DIR}/../MathLib
	${CMAKE_CURRENT_SOURCE_DIR}/../MeshLib
	${CMAKE_CURRENT_SOURCE_DIR}/../MeshLib/Elements
)

add_library(InSituLib
	VtkMappedMesh.h
	VtkMappedMesh.cpp
	VtkMappedMeshSource.h
	VtkMappedMeshSource.cpp
)

include(AddCatalystDependency)
ADD_CATALYST_DEPENDENCY(InSituLib)
