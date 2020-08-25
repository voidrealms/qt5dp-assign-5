#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QTimer>
#include <QDebug>

class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass(QObject *parent = nullptr);

    void start();

signals:
    void started();
    void started(int ms);

private slots:
    void timeout();

private:
    QTimer m_timer1;
    QTimer m_timer2;

};

#endif // MYCLASS_H
