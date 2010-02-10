#ifndef _OBSERVATEUR_H
#define	_OBSERVATEUR_H

#include "Point4D.h"
#include "Repere.h"
#include "Point4D.h"
#include "Vecteur4D.h"

class Image;


class Observateur {
    private:
	Repere repere_oeil;
	Point4D position_oeil;
	Point4D position_cible;
	float focale;
	float angle_vue;

    public:
        Observateur();
        Observateur(Point4D oeil, Point4D cible, float new_angle_vue, Image& image);
        Observateur(const Observateur& orig);
        ~Observateur();

	Point4D get_position_oeil()const;
	float get_focale()const;

};

#endif	/* _OBSERVATEUR_H */

