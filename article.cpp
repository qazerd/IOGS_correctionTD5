#include "article.h"
#include <iostream>
#include <cstdio>

Article::Article()
    : _nom("machin"),
      _prix(0.00),
      _dispo(false){}

Article::Article(std::string nom, float prix)
    : _nom(nom),
      _prix(prix),
      _dispo(true){}

const std::string &Article::nom() const {
return _nom;
}
const float &Article::prix() const{
return _prix;
}
const bool &Article::estDisponible() const{
return _dispo;
}
void Article::modifierDisponibilite(){
    _dispo= !this->_dispo;
}
void Article::info() const{
    std::cout << "L'article " << _nom << " coûte " << _prix << " et ";
    if (_dispo){
        std::cout <<  "il est ";
    }
    else{
        std::cout << "il n'est ";
    }
    std::cout << "disponible" << std::endl;
}
