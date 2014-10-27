/**
 * \file
 * \author Lars Bilke
 * \date   2014-09-25
 * \brief  Implementation of the VtuInterface class.
 *
 * \copyright
 * Copyright (c) 2012-2014, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#ifndef VTUINTERFACE_H_
#define VTUINTERFACE_H_

#include <string>

namespace MeshLib {
	class Mesh;
}

namespace FileIO
{

/**
 * \brief Reads and writes VtkXMLUnstructuredGrid-files (vtu) to and from OGS data structures.
 * This class is currently not inherited from Writer because VTK will implement
 * writing to a string from 6.2 onwards.
 */
class VtuInterface
{
public:
	/// Provide the mesh to write and set if compression should be used.
	VtuInterface(const MeshLib::Mesh* mesh, bool compress = false);
	~VtuInterface();

	/// Read an unstructured grid from a VTU file
	/// \returns The converted mesh or a nullptr if reading failed
	static MeshLib::Mesh* readVTUFile(std::string const &file_name);

	/// Writes the given mesh to file.
	/// \returns True on success, false on error
	bool writeToFile(std::string const &file_name);

private:
	const MeshLib::Mesh* _mesh;
	bool _use_compressor;
};

}

#endif /* VTUINTERFACE_H_ */