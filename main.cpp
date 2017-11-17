#include <iostream>
#include <stdio.h>

#include "article.h"
#include "panier.h"
#include "reduction.h"
#include "bonachat.h"
#include "promotion.h"

using namespace std;

int main()
{
    Article a1=Article("pomme",0.30);
    Article a2=Article("banane",0.70);
    Article a3=Article("noix",0.90);
        Article a4=Article("choux",1.90);
    a3.modifierDisponibilite();
    a1.info();
    Panier p1=Panier();
    p1.ajouterArticle(a1);
    p1.ajouterArticle(a2);
    p1.ajouterArticle(a3);
    p1.ajouterArticle(a4);
    p1.afficherArticles();
    std::cout<<"vous bénéficiez d'une promorion de 10%"<<std::endl
    Promotion r=Promotion(10.0);
    p1.ajouterReduction(&r);//Reduction is an abstract class, so we use pointer
    std::cout<<"L'ensemble du panier avec réduction représente un montant de : " << p1.prixTotal() << endl;
}

