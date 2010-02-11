#include "Scene.h"

#include <iostream>

Scene::Scene() {
}

Scene::Scene(Observateur n_obs, Image n_image, Couleur n_coul_fond)
        :obs(n_obs), coul_fond(n_coul_fond), nombre_objet(0), image(n_image){
}

//Scene::Scene(const Scene& orig) {}

Scene::~Scene() {
}

Image Scene::get_image()const{
    return image;
}

void Scene::moteur_graphique(){
    for(int i = 0; i < image.get_np(); i++)
        for(int j= 0; j < image.get_nl(); j++){
            //trouver les intersection de tous les objets
            Point4D p_a(i,j,obs.get_focale());
            Vecteur4D vecteur = obs.get_position_oeil() - p_a;
            vecteur.print_console();
            Rayon rayon(obs.get_position_oeil(), vecteur);
            rayon.get_direction().print_console();
            rayon.get_origine().print_console();
            std::cout<<std::endl<<std::endl<<std::endl;
            Intersection intersection(coul_fond);

            for(int k = 0; k <nombre_objet; k++){
            //faire appliquer la fontion a_intersection pour sphere
                if(liste_p_objet[k]->a_intersection(rayon)){
                std::cout << intersection.get_distance() << std::endl;
                    if(liste_p_objet[k]->get_intersection().get_distance()
                                                < intersection.get_distance())
			intersection = liste_p_objet[k]->get_intersection();
		}
            }
            //en déduire la couleur du pixel
            image.set_pixel(i,j,intersection.get_couleur());
        }
};

void Scene::ajout_objet(Objet* n_p_objet){
    liste_p_objet[nombre_objet] = n_p_objet;
    nombre_objet++;
}

