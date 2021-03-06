/**
 * \author Norihiro Watanabe
 * \date   2013-08-13
 *
 * \copyright
 * Copyright (c) 2012-2015, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */


#ifndef C0ISOPARAMETRICELEMENTS_H_
#define C0ISOPARAMETRICELEMENTS_H_

#include "MeshLib/Elements/Line.h"
#include "MeshLib/Elements/Tri.h"
#include "MeshLib/Elements/Quad.h"
#include "MeshLib/Elements/Hex.h"
#include "NumLib/Fem/ShapeFunction/ShapeLine2.h"
#include "NumLib/Fem/ShapeFunction/ShapeTri3.h"
#include "NumLib/Fem/ShapeFunction/ShapeQuad4.h"
#include "NumLib/Fem/ShapeFunction/ShapeHex8.h"

#include "TemplateIsoparametric.h"

namespace NumLib
{

template <template <typename> class T_SHAPE_MATRIX_POLICY>
struct FeLINE2
{
    typedef TemplateIsoparametric<ShapeLine2, T_SHAPE_MATRIX_POLICY<ShapeLine2>> type;
};

template <template <typename> class T_SHAPE_MATRIX_POLICY>
struct FeTRI3
{
    typedef TemplateIsoparametric<ShapeTri3, T_SHAPE_MATRIX_POLICY<ShapeTri3>> type;
};

template <template <typename> class T_SHAPE_MATRIX_POLICY>
struct FeQUAD4
{
    typedef TemplateIsoparametric<ShapeQuad4, T_SHAPE_MATRIX_POLICY<ShapeQuad4>> type;
};

template <template <typename> class T_SHAPE_MATRIX_POLICY>
struct FeHEX8
{
    typedef TemplateIsoparametric<ShapeHex8, T_SHAPE_MATRIX_POLICY<ShapeHex8>> type;
};

} // NumLib

#endif //C0ISOPARAMETRICELEMENTS_H_
