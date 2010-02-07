#include "Vecteur4D.h"

#include <iostream>
#include <math.h>

Vecteur4D::Vecteur4D(){
    valeurs[0] = 0;
    valeurs[1] = 0;
    valeurs[2] = 0;
    valeurs[3] = 0;
}

Vecteur4D::Vecteur4D(float n_x, float n_y, float n_z){
    valeurs[0] = (n_x);
    valeurs[1] = (n_y);
    valeurs[2] = (n_z);
    valeurs[3] = (0);
};

Vecteur4D::Vecteur4D(const Vecteur4D& orig) {
    valeurs[0] = orig.get(0);
    valeurs[1] = orig.get(1);
    valeurs[2] = orig.get(2);
    valeurs[3] = orig.get(3);
}

Vecteur4D::~Vecteur4D() {
}

float Vecteur4D::get(const int i)const{
    return valeurs[i];
}

void Vecteur4D::set(const int i, const float n_valeur){
    valeurs[i] = n_valeur;
}

float Vecteur4D::operator*(const Vecteur4D& v_b){
    return ((valeurs[0]* v_b.valeurs[0])+(valeurs[1]* v_b.valeurs[1])+
            (valeurs[2]* v_b.valeurs[2]));
}

Vecteur4D Vecteur4D::operator^(const Vecteur4D& v_b){
    return Vecteur4D((valeurs[1]*v_b.valeurs[2])-(valeurs[2]*v_b.valeurs[1]),
                     (valeurs[2]*v_b.valeurs[0])-(valeurs[0]*v_b.valeurs[2]),
                     (valeurs[0]*v_b.valeurs[1])-(valeurs[1]*v_b.valeurs[0]));
}

void Vecteur4D::print_console()const{
    for(int i = 0; i<4; i++)
        std::cout<<valeurs[i]<<std::endl;
};

bool Vecteur4D::est_null()const{
    return ((valeurs[0]==0)&&(valeurs[1]==0)&&(valeurs[2]==0));
};

void Vecteur4D::normalisation(){
    float norme = sqrt(pow(valeurs[0],2)+pow(valeurs[1],2)+pow(valeurs[2],2));
    valeurs[0] /= norme;
    valeurs[1] /= norme;
    valeurs[2] /= norme;
}

