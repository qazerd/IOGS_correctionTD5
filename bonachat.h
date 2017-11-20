#pragma once

#include "reduction.h"

class BonAchat : public Reduction
{
public:
BonAchat();
BonAchat(float value);
    ~BonAchat();
    virtual float appliquer (float _prix);
private:
    float _valeur;
};
