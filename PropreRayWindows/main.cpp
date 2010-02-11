/*
 * File:   main.cpp
 * Author: paul
 *
 * Created on 7 février 2010, 00:30
 */

#include <stdlib.h>
#include <math.h>

#include "Point4D.h"
#include "Vecteur4D.h"
#include "Matrice4D.h"
#include "Scene.h"
#include "Sphere.h"

/*
 *
 */
int main(int argc, char** argv) {
    Image image(1024, 768, (char*)"Image de tests");
    Couleur couleur_fond(255,0,255);
    //Point4D oeil(6,2,6);
    Point4D oeil(10,10,10);
    Point4D cible(0,0,0);
    Observateur observateur(oeil, cible, 45, image);
    Scene scene(observateur, image, couleur_fond);
    Point4D origine_bille(0,0,0);
    Couleur couleur_bille(255,0,0);
    Sphere bille(origine_bille, 1, couleur_bille);
    scene.ajout_objet(&bille);
    scene.moteur_graphique();
    scene.get_image().save_to_ppm();

    return (EXIT_SUCCESS);
}

