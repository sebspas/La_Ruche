#ifndef FREULON_H
#define FREULON_H

#include "objet.h"

class Freulon : public Objet
{
public:
    Freulon();

    void paint(QPainter *painter);
    void update();
};

#endif // FREULON_H
