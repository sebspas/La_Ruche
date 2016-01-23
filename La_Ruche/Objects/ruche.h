#ifndef RUCHE_H
#define RUCHE_H

#include "objet.h"

class Ruche : public Objet
{
public:
    Ruche();

    void paint(QPainter *painter);
    void update();
};

#endif // RUCHE_H
