#include "Sphere.h"

#include <math.h>
#include <iostream>

#include "Rayon.h"

Sphere::Sphere():Objet(),centre(),taille(1){
}

Sphere::Sphere(Point4D n_centre, float n_taille):Objet(),centre(n_centre),
                                                                taille(n_taille){
}

Sphere::Sphere(Point4D n_centre, float n_taille, Couleur n_couleur):
                                 Objet(n_couleur),centre(n_centre),taille(n_taille){
}

Sphere::Sphere(const Sphere& orig) { }

Sphere::~Sphere() { }

bool Sphere::a_intersection(Rayon rayon){
    float B = 2*((rayon.get_direction().get(0)* (rayon.get_origine().get(0) - centre.get(0))) +
                (rayon.get_direction().get(1)* (rayon.get_origine().get(1) - centre.get(1))) +
                (rayon.get_direction().get(2)* (rayon.get_origine().get(2) - centre.get(2))));

    float C = ((rayon.get_origine().get(0) - centre.get(0)) *
                                (rayon.get_origine().get(0) - centre.get(0))) +
                ((rayon.get_origine().get(1) - centre.get(1)) *
                                (rayon.get_origine().get(1) - centre.get(1))) +
                ((rayon.get_origine().get(2) - centre.get(2)) *
                                (rayon.get_origine().get(2) - centre.get(2)));
    float t0 = (-B - sqrt(B*B -4*C)) / 2;
    float t1 = (-B + sqrt(B*B -4*C)) / 2;
    std::cout<< rayon.get_origine().get(0) << std::endl;
    if((t0 <= 0)&&(t1 <= 0))
        return false;
    if( t0 = t1)
        return false;
    if( t0 < t1)
        intersection.set_distance(t0);
    else
        intersection.set_distance(t1);
    return true;
}
