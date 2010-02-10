#include "Intersection.h"

#include <float.h>

Intersection::Intersection():couleur(), distance(FLT_MAX), contact(), normale(){
}

Intersection::Intersection(Couleur n_couleur): couleur(n_couleur),
                                distance(FLT_MAX), contact(), normale(){
}

Intersection::Intersection(Couleur n_couleur, float n_distance):
                 couleur(n_couleur), distance(n_distance), contact(), normale(){
}

//Intersection::Intersection(const Intersection& orig){}

Intersection::~Intersection() {
}

float Intersection::get_distance()const{
    return distance;
}

void Intersection::set_distance(const float n_distance){
    distance = n_distance;
}

Couleur Intersection::get_couleur()const{
    return couleur;
}

void Intersection::set_couleur(const Couleur n_couleur){
    couleur = n_couleur;
}

