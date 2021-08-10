#include "antilope.h"

#include <QDebug>

Antilope::Antilope(QObject *parent)
    :QObject(parent)
{
    setObjectName("DangerDan");
    qDebug() << objectName() << "created";
}

void Antilope::eat()
{
    qDebug() << objectName() << "start chewing...";
}

void Antilope::sleep()
{
    qDebug() << objectName() << "closing eyes...";
}

void Antilope::runAwayFromLion()
{
    qDebug() << objectName() << "running away...";
}
