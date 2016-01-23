#ifndef OBJET_H
#define OBJET_H

#include <QPainter>
#include <QPoint>

class Objet
{
public:
    Objet(){ };

    virtual void paint(QPainter *painter);
    virtual void update();

    QPoint getPos() const {
        return pos;
    }

protected:
    QPoint pos;
};

#endif // OBJET_H
