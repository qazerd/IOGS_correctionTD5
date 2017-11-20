#include "bonachat.h"
#include "reduction.h"

BonAchat::BonAchat()
    : _valeur(0.0){}

BonAchat::BonAchat(float value)
    : _valeur(value){}

float BonAchat::appliquer (float prix){
    float nouveauPrix = prix-_valeur;
        return nouveauPrix;
}

