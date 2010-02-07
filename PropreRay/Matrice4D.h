#ifndef _MATRICE4D_H
#define	_MATRICE4D_H

#include "Vecteur4D.h"

class Vecteur4D;

class Matrice4D {
    private:
        float valeurs[4][4];

    public:
        Matrice4D();//Par defaut on crée une matrice identite
        Matrice4D(Vecteur4D v_1, Vecteur4D v_2, Vecteur4D v_3);
        Matrice4D(const Matrice4D& orig);
        virtual ~Matrice4D();

        Matrice4D operator* (const Matrice4D& m_b) const;
        Vecteur4D operator* (const Vecteur4D& v_b) const;
        Matrice4D operator! ()const;

        float get(const int i, const int j)const;
        void set(const int i, const int j, const float n_valeur);

        void print_console()const;
       	void identite_to_translation(Vecteur4D v_b);
	void identite_to_homothetie(Vecteur4D v_b);
	void identite_to_rotation_X(float theta);
	void identite_to_rotation_Y(float theta);
	void identite_to_rotation_Z(float theta);

};

#endif	/* _MATRICE4D_H */
