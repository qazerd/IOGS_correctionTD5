#include "article.h"
#include <iostream>
#include <stdio.h>

Article::Article()
{
_nom ="machin";
_prix =0.00;
_dispo = false;
}
Article::Article(std::string nom, float prix){
    _nom=nom;
    _prix=prix;
    _dispo= true;
}
std::string Article::nom(){
return _nom;
}
float Article::prix(){
return _prix;
}
bool Article::estDisponible(){
return _dispo;
}
void Article::modifierDisponibilite(){
    _dispo= !this->_dispo;
}
void Article::info(){
    std::cout << "L'article " << _nom << " coûte " << _prix << " et ";
    if (_dispo){
        std::cout <<  "il est ";
    }
    else{
        std::cout << "il n'est ";
    }
    std::cout << "disponible" << std::endl;
}
