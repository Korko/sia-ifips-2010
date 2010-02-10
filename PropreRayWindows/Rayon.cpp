#include "Rayon.h"

Rayon::Rayon():origine(), direction(1,0,0) { }

Rayon::Rayon(Point4D n_origine, Vecteur4D n_direction):
                             origine(n_origine),direction(n_direction){
    direction.normalisation();
}

Rayon::Rayon(Point4D n_origine, Point4D arrive):
                             origine(n_origine),direction(n_origine, arrive){
    direction.normalisation();
}

Rayon::Rayon(const Rayon& orig) {
    origine = orig.get_origine();
    direction = orig.get_direction();
}

Rayon::~Rayon() {}

Vecteur4D Rayon::get_direction()const{
    return direction;
};

Point4D Rayon::get_origine()const{
    return origine;
};
