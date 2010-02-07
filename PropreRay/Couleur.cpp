#include "Couleur.h"

Couleur::Couleur():rouge(0),vert(0),bleu(0){}

Couleur::Couleur(float r, float v, float b):rouge(r),vert(v),bleu(b){};

Couleur::Couleur(int r, int v, int b){
    set_bleu_255(b);
    set_vert_255(v);
    set_rouge_255(r);
};

Couleur::Couleur(const Couleur& orig) {
    rouge = orig.get_rouge();
    vert = orig.get_vert();
    bleu = orig.get_bleu();
}

Couleur::~Couleur() {}

Couleur Couleur::operator+(Couleur& c_b){
    rouge += c_b.get_rouge();
    if(rouge >= 1)
        rouge = 1;
    vert += c_b.get_vert();
    if(vert >= 1)
        vert = 1;
    bleu += c_b.get_bleu();
    if(bleu >= 1)
        bleu = 1;
}

Couleur Couleur::operator-(Couleur& c_b){
    rouge -= c_b.get_rouge();
    if(rouge <= 0)
        rouge = 0;
    vert -= c_b.get_vert();
    if(vert <= 0)
        vert = 0;
    bleu -= c_b.get_bleu();
    if(bleu <= 0)
        bleu = 0;
}

float Couleur::get_rouge()const{
    return rouge;
}

void Couleur::set_rouge(const float n_rouge){
    rouge = n_rouge;
}

int Couleur::get_rouge_255()const{
    return (unsigned char)((int)(255 * rouge));
}

void Couleur::set_rouge_255(const int n_rouge){
    rouge = (float)n_rouge/(float)255;
}

float Couleur::get_vert()const{
    return vert;
}

void Couleur::set_vert(const float n_vert){
    vert = n_vert;
}

int Couleur::get_vert_255()const{
    return (unsigned char)((int)(255 * vert));
}

void Couleur::set_vert_255(const int n_vert){
    vert = (float)n_vert/(float)255;
}

float Couleur::get_bleu()const{
    return bleu;
}

void Couleur::set_bleu(const float n_bleu){
    bleu = n_bleu;
}

int Couleur::get_bleu_255()const{
    return (unsigned char)((int)(255 * bleu));
}
void Couleur::set_bleu_255(const int n_bleu){
    bleu = (float)n_bleu/(float)255;
}
