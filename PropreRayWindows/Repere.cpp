#include "Repere.h"

#include "Matrice4D.h"
#include "Vecteur4D.h"

Repere::Repere():matrice(){ }

Repere::Repere(Matrice4D origine):matrice(origine){}

Repere::Repere(const Repere& orig) {
    matrice = orig.get_matrice();
}

Repere::~Repere() {
}

Matrice4D Repere::get_matrice() const{
    return matrice;
}

void Repere::set_matrice(const Matrice4D n_matrice){
    matrice = n_matrice;
}

void Repere::translater(const Vecteur4D translation){
	Matrice4D a;
	a.identite_to_translation(translation);
	matrice = matrice * a;
};

void Repere::rotation_X(float theta){
	Matrice4D a;
	a.identite_to_rotation_X(theta);
	matrice = matrice * a;
};

void Repere::rotation_Y(float theta){
	Matrice4D a;
	a.identite_to_rotation_Y(theta);
	matrice = matrice * a;
};

void Repere::rotation_Z(float theta){
	Matrice4D a;
	a.identite_to_rotation_Z(theta);
	matrice = matrice * a;
};
