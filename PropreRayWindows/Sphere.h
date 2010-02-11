#ifndef _SPHERE_H
#define	_SPHERE_H

#include "Objet.h"


class Sphere :public Objet{
    private:
	Point4D centre;
	float taille;
    public:
        Sphere();
        Sphere(Point4D n_centre, float n_taille);
        Sphere(Point4D n_centre, float n_taille, Couleur couleur);
        //Sphere(const Sphere& orig);
        virtual ~Sphere();

        bool a_intersection(Rayon rayon);
};

#endif	/* _SPHERE_H */

