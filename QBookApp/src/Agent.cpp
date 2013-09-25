/*************************************************************************

bq Cervantes e-book reader application
Copyright (C) 2011-2013  Mundoreader, S.L

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with the source code.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c Agent -a Agent -N agent.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "Agent.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Agent
 */

Agent::Agent(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
	qDebug() << "Agent::Agent";
    // constructor
    setAutoRelaySignals(true);
}

Agent::~Agent()
{
    // destructor
}

void Agent::Cancel()
{
	qDebug() << "Agent::Cancel";
    // handle method call net.connman.Agent.Cancel
    QMetaObject::invokeMethod(parent(), "Cancel");
}

void Agent::Release()
{
    // handle method call net.connman.Agent.Release
    QMetaObject::invokeMethod(parent(), "Release");
}

void Agent::ReportError(const QDBusObjectPath &path, const QString &error, const QDBusMessage &message)
{
    // handle method call net.connman.Agent.ReportError
	qDebug() << "Agent::ReportError";
    QMetaObject::invokeMethod(parent(), "ReportError", Q_ARG(QDBusObjectPath, path), Q_ARG(QString, error), Q_ARG(QDBusMessage, message));
}

void Agent::RequestBrowser(const QDBusObjectPath &path, const QString &url)
{
    // handle method call net.connman.Agent.RequestBrowser
    QMetaObject::invokeMethod(parent(), "RequestBrowser", Q_ARG(QDBusObjectPath, path), Q_ARG(QString, url));
}

QVariantMap Agent::RequestInput(const QDBusObjectPath &path, const QVariantMap &fields, const QDBusMessage &message)
{
    // handle method call net.connman.Agent.RequestInput
	qDebug() << "Agent::RequestInput";
    QVariantMap out0;
    QMetaObject::invokeMethod(parent(), "RequestInput", Q_RETURN_ARG(QVariantMap, out0), Q_ARG(QDBusObjectPath, path), Q_ARG(QVariantMap, fields), Q_ARG(QDBusMessage, message));
    return out0;
}
