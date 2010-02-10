#include "Objet.h"

#include "Couleur.h"
#include "Intersection.h"

Objet::Objet():couleur(), intersection(couleur) {
}

Objet::Objet(Couleur n_couleur):couleur(n_couleur), intersection(n_couleur) {
}

//Objet::Objet(const Objet& orig) {}

Objet::~Objet() {
}
