#include "Point4D.h"

#include <iostream>

#include "Vecteur4D.h"

Point4D::Point4D(){
    valeurs[0] = 0;
    valeurs[1] = 0;
    valeurs[2] = 0;
    valeurs[3] = 0;
}

Point4D::Point4D(float n_x, float n_y, float n_z){
    valeurs[0] = (n_x);
    valeurs[1] = (n_y);
    valeurs[2] = (n_z);
    valeurs[3] = (0);
};

Point4D::Point4D(const Point4D& orig) {
    valeurs[0] = orig.get(0);
    valeurs[1] = orig.get(1);
    valeurs[2] = orig.get(2);
    valeurs[3] = orig.get(3);
}

Point4D::~Point4D() {
}

float Point4D::get(const int i)const{
    return valeurs[i];
}

void Point4D::set(const int i, const float n_valeur){
    valeurs[i] = n_valeur;
}

void Point4D::print_console()const{
    for(int i = 0; i<4; i++)
        std::cout<<valeurs[i]<<std::endl;
};

Vecteur4D Point4D::operator- (const Point4D& p_b){
	return Vecteur4D(valeurs[0]-p_b.get(0),valeurs[1]-p_b.get(1),
                         valeurs[2]-p_b.get(2));
};
