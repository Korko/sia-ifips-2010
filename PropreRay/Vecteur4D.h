#ifndef _VECTEUR4D_H
#define	_VECTEUR4D_H

class Point4D;

class Vecteur4D {
    private:
        float valeurs[4];

    public:
        Vecteur4D();
        Vecteur4D(float n_x, float n_y, float n_z);
        Vecteur4D(Point4D debut, Point4D fin);
        Vecteur4D(const Vecteur4D& orig);
        virtual ~Vecteur4D();

        float get(const int i)const;
        void set(const int i, const float n_valeur);

        float operator*(const Vecteur4D& v_b);
	Vecteur4D operator^(const Vecteur4D& v_b);

        void print_console()const;
        bool est_null()const;
        void normalisation();
};

#endif	/* _VECTEUR4D_H */
