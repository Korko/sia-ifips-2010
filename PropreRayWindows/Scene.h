#ifndef _SCENE_H
#define	_SCENE_H

#include <list>

#include "Objet.h"
#include "Observateur.h"
#include "Image.h"

class Scene {
    private:
	Observateur obs;
        // Pb stdlib/polymorphisme
	//std::list<Objet> liste_objet;
        Objet* liste_p_objet[10];
	int nombre_objet;
	Image image;
	Couleur coul_fond;

    public:
        Scene();
        Scene(Observateur n_obs, Image n_image, Couleur n_coul_fond);
        //Scene(const Scene& orig);
        virtual ~Scene();

        Image get_image()const;

        void moteur_graphique();
        void ajout_objet(Objet* n_p_objet);
};

#endif	/* _SCENE_H */

