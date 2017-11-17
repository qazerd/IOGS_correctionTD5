#include <iostream>
#include "promotion.h"
#include "reduction.h"

Promotion::Promotion(){
    _valeur= 100.0;
}

Promotion::Promotion(float taux){
    _valeur=taux;
}
    float Promotion::appliquer (float prix){
    float nouveauPrix=prix-(prix*_valeur/100.0);
    return nouveauPrix;
}

