#ifndef FLEUR_H
#define FLEUR_H

#include "objet.h"

class Fleur : public Objet
{
public:
    Fleur();

    void paint(QPainter *painter);
    void update();
};

#endif // FLEUR_H
