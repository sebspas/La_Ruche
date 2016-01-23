#include "abeille.h"

#include <QDir>

Abeille::Abeille()
{

}

Abeille::~Abeille()
{

}

void Abeille::paint(QPainter *painter)
{
    QString CurrentDir = QDir::currentPath();
    QImage* image = new QImage(CurrentDir+"/images/abeille.png");
    painter->drawImage(this->pos,*image);
}

void Abeille::deplacement(int x, int y)
{

}

void Abeille::setPos(int x, int y)
{
    this->pos.setX(x);
    this->pos.setY(y);
}

Objet* Abeille::capteur() const
{

}

void Abeille::update()
{

}
