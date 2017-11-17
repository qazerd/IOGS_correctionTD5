#ifndef PROMOTION_H
#define PROMOTION_H
#include "reduction.h"

class Promotion : public Reduction
{
public:
    Promotion();
    Promotion(float taux);
    float appliquer (float prix);
private:
    float _valeur;
};

#endif // PROMOTION_H
