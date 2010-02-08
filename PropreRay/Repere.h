#ifndef _REPERE_H
#define	_REPERE_H

#include "Matrice4D.h"

class Matrice4D;
class Vecteur4D;

class Repere {
    private:
        Matrice4D matrice;

    public:
        Repere();
        Repere(Matrice4D n_matrice);
        Repere(const Repere& orig);
        virtual ~Repere();

        Matrice4D get_matrice()const;
        void set_matrice(const Matrice4D n_matrice);

        void translater(const Vecteur4D tranlation);
        void rotation_X(float theta);
        void rotation_Y(float theta);
        void rotation_Z(float theta);

};

#endif	/* _REPERE_H */

