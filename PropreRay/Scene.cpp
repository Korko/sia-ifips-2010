#include "Scene.h"

Scene::Scene() {
}

Scene::Scene(Observateur n_obs, Image n_image, Couleur n_coul_fond)
        :obs(n_obs), coul_fond(n_coul_fond), nombre_objet(0), image(n_image){
}

Scene::Scene(const Scene& orig) {
}

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
            Rayon rayon(obs.get_position_oeil(), vecteur);
            Intersection intersection(coul_fond);

            for(std::list<Objet>::iterator it = liste_objet.begin();
                     it != liste_objet.end() ; ++it){
            //faire appliquer la fontion a_intersection pour sphere
                if(it->a_intersection(rayon)){
                //std::cout << intersection.get_t() << std::endl;
                    if(it->get_intersection().get_distance()
                                                < intersection.get_distance())
			intersection = it->get_intersection();
		}
            }
            //en déduire la couleur du pixel
            image.set_pixel(i,j,intersection.get_couleur());
        }
};

void Scene::ajout_objet(const Objet n_objet){
    liste_objet.push_back(n_objet);
}

