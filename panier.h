#pragma once

#include <iostream>
#include <cstdio>
#include <vector>

#include "article.h"
#include "reduction.h"

class Panier
{
public:
    Panier();
    void ajouterArticle(Article);
    float prixTotal() ;
    float prixFinal();
    void afficherArticles();
    void ajouterReduction(Reduction *R);
private:
   std::vector<Article> _contenu;
   Reduction *_r=NULL;//Reduction is an abstract class, so we use pointer
};
