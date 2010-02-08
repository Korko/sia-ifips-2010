#ifndef _SCENE_H
#define	_SCENE_H

#include <list>

#include "Objet.h"
#include "Observateur.h"
#include "Image.h"

class Scene {
    private:
	Observateur obs;
	std::list<Objet> liste_objet;
	int nombre_objet;
	Image image;
	Couleur coul_fond;

    public:
        Scene();
        Scene(Observateur n_obs, Image n_image, Couleur n_coul_fond);
        Scene(const Scene& orig);
        virtual ~Scene();

        void moteur_graphique();
        void ajout_objet(const Objet n_objet);
};

#endif	/* _SCENE_H */

