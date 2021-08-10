#pragma once

#include <QObject>

class Antilope : public QObject
{
    Q_OBJECT

public:
    Antilope(QObject* parent = nullptr);

    void eat();
    void sleep();
    void runAwayFromLion();
};

