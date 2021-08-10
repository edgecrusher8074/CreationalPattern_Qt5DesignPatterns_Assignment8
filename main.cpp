#include <QCoreApplication>

/**
 * @brief Assignment 8 for Qt5 Design Patterns Tutorial on Udemy.
 * @details Simple application to demonstrate the usage of a singleton class.
 *          Singleton class taken from http://www.nuonsoft.com/blog/2017/08/10/implementing-a-thread-safe-singleton-with-c11-using-magic-statics/
 * @author edgecrusher8074
 */

#include "antilope.h"
#include "singleton.h"
#include <QDebug>


void testEat()
{
    CSingleton<Antilope>::GetInstance().eat();
}


void testSleep()
{
   CSingleton<Antilope>::GetInstance().sleep();
}

void testAntilope()
{
    CSingleton<Antilope>::GetInstance().setObjectName("PanziTheGreat");
    testEat();
    testSleep();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    testAntilope();
    CSingleton<Antilope>::GetInstance().runAwayFromLion();
    return a.exec();
}
