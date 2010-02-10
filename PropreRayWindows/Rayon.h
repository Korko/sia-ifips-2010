#ifndef _RAYON_H
#define	_RAYON_H

#include "Point4D.h"
#include "Vecteur4D.h"


class Rayon {
    private:
        Point4D origine;
        Vecteur4D direction;
        
    public:
        Rayon();
        Rayon(Point4D n_origine, Vecteur4D n_direction);
        Rayon(Point4D n_origine, Point4D arrive);
        Rayon(const Rayon& orig);
        virtual ~Rayon();

        Vecteur4D get_direction()const;
        Point4D get_origine()const;
};

#endif	/* _RAYON_H */

