#include "Matrice4D.h"

#include <iostream>

#include "Vecteur4D.h"

Matrice4D::Matrice4D() {
    for(int i = 0; i<4;i++)
        for(int j = 0; j<4; j++)
            valeurs[i][j] = 0;
    valeurs[0][0] = 1;
    valeurs[1][1] = 1;
    valeurs[2][2] = 1;
    valeurs[3][3] = 1;
}

Matrice4D::Matrice4D(Vecteur4D v_1, Vecteur4D v_2, Vecteur4D v_3){
    for(int i = 0; i<4;i++){
        valeurs[i][0] = v_1.get(i);
        valeurs[i][1] = v_2.get(i);
        valeurs[i][2] = v_3.get(i);
        valeurs[i][3] = 0;
    }
}

Matrice4D::Matrice4D(const Matrice4D& orig) {
    for(int i = 0; i<4;i++)
        for(int j = 0; j<4; j++)
            valeurs[i][j] = orig.get(i,j);
}

Matrice4D::~Matrice4D() {}

float Matrice4D::get(const int i, const int j)const{
    return valeurs[i][j];
}

void Matrice4D::set(const int i,  const int j, const float n_valeur){
    valeurs[i][j] = n_valeur;
}

void Matrice4D::print_console()const{
    for(int i = 0; i<4; i++)
        std::cout<<valeurs[i][0]<<" "<<valeurs[i][1]<<" "<<valeurs[i][2]<<" "<<valeurs[i][3]<<" "<<std::endl;
};
