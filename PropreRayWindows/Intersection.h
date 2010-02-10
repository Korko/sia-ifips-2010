#ifndef _INTERSECTION_H
#define	_INTERSECTION_H

#include "Couleur.h"
#include "Point4D.h"
#include "Vecteur4D.h"

class Intersection {
    private:
        Couleur couleur;
        float distance;
	Point4D contact;
	Vecteur4D normale;

    public:
        Intersection();
        Intersection(Couleur couleur);
        Intersection(Couleur couleur, float n_distance);
        //Intersection(const Intersection& orig);
        virtual ~Intersection();

        float get_distance()const;
        void set_distance(const float n_distance);
        Couleur get_couleur()const;
        void set_couleur(const Couleur n_couleur);

};

#endif	/* _INTERSECTION_H */

