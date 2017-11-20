#pragma once
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
