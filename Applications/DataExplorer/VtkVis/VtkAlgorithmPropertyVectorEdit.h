/**
 * \file
 * \author Lars Bilke
 * \date   2010-10-22
 * \brief  Definition of the VtkAlgorithmPropertyVectorEdit class.
 *
 * \copyright
 * Copyright (c) 2012-2015, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#ifndef VTKALGORITHMPROPERTYVECTOREDIT_H
#define VTKALGORITHMPROPERTYVECTOREDIT_H

#include <QList>
#include <QVariant>
#include <QWidget>

class VtkAlgorithmProperties;

/// @brief This edit widget consists of several QLineEdit to set a user vector
/// property on the given VtkAlgorithmProperties object automatically.
class VtkAlgorithmPropertyVectorEdit : public QWidget
{
	Q_OBJECT

public:
	/// @brief Constructor.
	/// @param contents The initial values of the text edits.
	/// @param name The name of the user property to set.
	/// @param type The type of the property.
	/// @param algProps The VtkAlgorithmProperties object.
	/// @param parent The parent widget.
	VtkAlgorithmPropertyVectorEdit(const QList<QString> contents,
	                               const QString& name,
	                               QVariant::Type type,
	                               VtkAlgorithmProperties* algProps,
	                               QWidget* parent = 0);
	virtual ~VtkAlgorithmPropertyVectorEdit();

private:
	const QString _name;
	VtkAlgorithmProperties* _algProps;
	QVariant::Type _type;

private slots:
	/// @brief This slots is automatically called when the checkbox state changed.
	void setNewValue();

signals:
	/// @brief Is emitted when text of one the line edits changed.
	void editingFinished();
};

#endif // VTKALGORITHMPROPERTYVECTOREDIT_H
