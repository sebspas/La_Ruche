#ifndef ABEILLE_H
#define ABEILLE_H

#define TAILLE_ADN 18

#include "objet.h"

class Abeille : public Objet
{
public:
    Abeille();
    ~Abeille();

    void paint(QPainter *painter);
    void deplacement(int x, int y);

    void setPos(int x, int y);

    Objet* capteur() const;
    void update();

private:
    bool vivante;
    bool pollen;
    unsigned int score;
    float adn[18];
};

#endif // ABEILLE_H
