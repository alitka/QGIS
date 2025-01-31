/***************************************************************************
                             qgsprojectutils.h
                             -------------------
    begin                : July 2021
    copyright            : (C) 2021 Nyall Dawson
    email                : nyall dot dawson at gmail dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSPROJECTUTILS_H
#define QGSPROJECTUTILS_H

#include "qgis_sip.h"
#include "qgis_core.h"
#include "qgis.h"

#include <QList>

class QgsProject;
class QgsMapLayer;

/**
 * \ingroup core
 * \brief Contains utility functions for working with QGIS projects.
 * \since QGIS 3.22
*/
class CORE_EXPORT QgsProjectUtils
{

  public:

    /**
     * Returns a list of all layers in the specified \a project which match the given \a path.
     *
     * This method can be used to retrieve a list of layers in a project associated with a file path.
     */
    static QList< QgsMapLayer * > layersMatchingPath( const QgsProject *project, const QString &path );

};

#endif // QGSPROJECTUTILS_H


