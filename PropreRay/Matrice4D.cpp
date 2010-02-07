#include "Matrice4D.h"

#include <iostream>
#include <math.h>

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

Matrice4D Matrice4D::operator* (const Matrice4D& m_b)const{
    Matrice4D resultat;
    for(int i = 0; i<4;i++)
        for(int j = 0; j<4; j++){
            float temp_resultat = 0;
            for(int k = 0; k<4; k++)
                temp_resultat += valeurs[i][k] * m_b.get(k,j);
            resultat.set(i,j,temp_resultat);
    }
    return resultat;
    
}

Vecteur4D Matrice4D::operator* (const Vecteur4D& v_b) const{
    float resultats[4];
    for(int i = 0; i<4;i++){
        float temp = 0;
        for(int k = 0; k<4; k++)
            temp += valeurs[i][k]* v_b.get(k);
        resultats[i] = temp;
    }
    return Vecteur4D(resultats[0], resultats[1], resultats[2]);
}

Matrice4D Matrice4D::operator! ()const{
    Matrice4D resultat;
    for(int i = 0; i<4;i++)
        for(int j = 0; j<4; j++)
            resultat.set(i,j,this->get(j,i));
    return resultat;
}

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

void Matrice4D::identite_to_translation(Vecteur4D v_b){
    valeurs[0][3] = v_b.get(0);
    valeurs[1][3] = v_b.get(1);
    valeurs[2][3] = v_b.get(2);
}

void Matrice4D::identite_to_homothetie(Vecteur4D v_b){
    valeurs[0][0] = v_b.get(0);
    valeurs[1][1] = v_b.get(1);
    valeurs[2][2] = v_b.get(2);
}

void Matrice4D::identite_to_rotation_X(float theta){
    valeurs[1][1] = cos(theta);
    valeurs[1][2] = -sin(theta);
    valeurs[2][1] = sin(theta);
    valeurs[2][2] = cos(theta);
}

void Matrice4D::identite_to_rotation_Y(float theta){
    valeurs[0][0] = cos(theta);
    valeurs[0][2] = sin(theta);
    valeurs[2][0] = -sin(theta);
    valeurs[2][2] = cos(theta);
}

void Matrice4D::identite_to_rotation_Z(float theta){
    valeurs[0][0] = cos(theta);
    valeurs[0][1] = -sin(theta);
    valeurs[1][0] = sin(theta);
    valeurs[1][1] = cos(theta);
}
