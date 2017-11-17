#ifndef BONACHAT_H
#define BONACHAT_H

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

#endif // BONACHAT_H
