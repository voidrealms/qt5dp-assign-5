#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    connect(&m_timer1, &QTimer::timeout, this, &MyClass::timeout);
    connect(&m_timer2, &QTimer::timeout, this, &MyClass::timeout);
    m_timer1.setInterval(1000);
    m_timer2.setInterval(2000);
}

void MyClass::start()
{
    m_timer1.start();
    m_timer2.start();
}

void MyClass::timeout()
{
    QTimer *timer = qobject_cast<QTimer*>(sender());
    if(!timer) return;

    if(timer == &m_timer1)
    {
        qInfo() << "Timer 1";
    }

    if(timer == &m_timer2)
    {
        qInfo() << "Timer 2";
    }
}
