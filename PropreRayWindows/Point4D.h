#ifndef _POINT4D_H
#define	_POINT4D_H

class Vecteur4D;

class Point4D {
    private:
        float valeurs[4];

    public:
        Point4D();
        Point4D(float n_x, float n_y, float n_z);
        Point4D(const Point4D& orig);
        virtual ~Point4D();

        float get(const int i)const;
        void set(const int i, const float n_valeur);

        Vecteur4D operator-(const Point4D& p_b);

        inline void print_console()const;

};

#endif	/* _POINT4D_H */

