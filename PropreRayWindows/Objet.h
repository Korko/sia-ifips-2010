#ifndef _OBJET_H
#define	_OBJET_H

#include "Couleur.h"
#include "Intersection.h"
#include "Rayon.h"

class Objet {
    private:
    protected:
	Couleur couleur;
	Intersection intersection;
    public:
        Objet();
        Objet(Couleur n_couleur);
        //Objet(const Objet& orig);
        virtual ~Objet();

        virtual Intersection get_intersection()const = 0;
        
        virtual bool a_intersection(Rayon rayon) = 0;

};
#endif	/* _OBJET_H */
