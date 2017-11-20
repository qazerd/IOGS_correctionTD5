#pragma once
#include <iostream>
#include <cstdio>

class Article
{
public:
    Article();
    Article( std::string nom, float prix);
    const std::string &nom() const;
    const float &prix () const;
    void modifierDisponibilite();
    const bool &estDisponible() const;
    void info() const ;
private:
    std::string _nom;
    float _prix;
    bool _dispo;
};
