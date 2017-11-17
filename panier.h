#ifndef PANIER_H
#define PANIER_H

#include <iostream>
#include <stdio.h>
#include <vector>

#include "article.h"
#include "reduction.h"

class Panier
{
public:
    Panier();
    void ajouterArticle(Article);
    float prixTotal();
    float prixFinal();
    void afficherArticles();
    void ajouterReduction(Reduction *R);
private:
   std::vector<Article> _contenu;
   Reduction *_r=NULL;//Reduction is an abstract class, so we use pointer
};

#endif // PANIER_H
