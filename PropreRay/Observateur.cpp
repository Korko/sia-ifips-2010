#include "Observateur.h"

#include <math.h>

#include "Matrice4D.h"
#include "Image.h"

Observateur::Observateur(Point4D oeil, Point4D cible, float new_angle_vue, Image& image)
            :position_oeil(oeil), position_cible(cible), angle_vue(new_angle_vue){
    Vecteur4D v1;
    Vecteur4D v2;
    Vecteur4D v3;
    v1 =cible - oeil;
    for(int i = 0; i < 3; i++){
            v3.set(i,1);
            v2 = v1^v3;
            if(!(v2.est_null()))
                    break;
            v3.set(i,0);
    }
    v3 = v1^v2;

    Matrice4D matrice(v1, v2, v3);

    repere_oeil.set_matrice(matrice);

    focale = ((float)image.get_np())/(2.f * tan(((angle_vue/180.f)*M_PI)/2.f));
}

Observateur::Observateur(const Observateur& orig) {
}

Observateur::~Observateur() {
}

Point4D Observateur::get_position_oeil()const{
    return position_oeil;
}

float Observateur::get_focale()const{
    return focale;
}
