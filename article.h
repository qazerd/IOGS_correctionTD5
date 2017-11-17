#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <stdio.h>

class Article
{
public:
    Article();
    Article( std::string nom, float prix);
    std::string nom();
    float prix();
    void modifierDisponibilite();
    bool estDisponible();
    void info();
private:
    std::string _nom;
    float _prix;
    bool _dispo;
};

#endif // ARTICLE_H
