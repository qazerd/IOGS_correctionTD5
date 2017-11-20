#include <iostream>
#include <cstdio>
#include <vector>

#include "panier.h"
#include "article.h"

Panier::Panier(){
std::vector<Article> _contenu;
}

void Panier::ajouterArticle(Article art){
    if (art.estDisponible()){
    _contenu.push_back(art);
    std::cout << "l'article " << art.nom() << " a été ajouté au Panier" << std::endl;
    }
    else{
     std::cout << "Malheureusement, l'article " << art.nom() << " n'est plus disponible" << std::endl;
    }
}
float Panier::prixTotal(){
    float somme=0.0;
    // for loop syntax please refer to https://stackoverflow.com/questions/409348/iteration-over-stdvector-unsigned-vs-signed-index-variable
    for(std::vector<Article>::iterator it = _contenu.begin(); it != _contenu.end(); ++it){
        somme +=it->prix();//please refer to https://stackoverflow.com/questions/322128/c-stl-vector-iterator-accessing-members-of-an-object
        if (_r!=NULL) somme=_r->appliquer(somme);
    }
return somme;
}

void Panier::afficherArticles(){
    std::cout << "votre panier contient :" << std::endl;
    for(std::vector<Article>::iterator it = _contenu.begin(); it != _contenu.end(); ++it){
        std::cout << it->nom() << std::endl;
    }
}
void Panier::ajouterReduction(Reduction *R){// Reduction is an abstract class, so we use pointer
_r=R;
}
