#include "Image.h"

#include <string.h>
#include <iostream>
#include <cstdlib>
#include <fstream>

#include "Couleur.h"

Image::Image() {
    pic = (unsigned char*)calloc(nl * np * 3, sizeof(unsigned char));
}

Image::Image(int n_np, int n_nl, char* n_filename):np(n_np),nl(n_nl),
                                                           filename(n_filename){
    pic = (unsigned char*)calloc(nl * np * 3, sizeof(unsigned char));
}

Image::Image(int n_np, int n_nl, std::string n_filename):np(n_np),nl(n_nl),
                                                           filename(n_filename){
    pic = (unsigned char*)calloc(nl * np * 3, sizeof(unsigned char));
}


Image::Image(const Image& orig) {
    np = orig.get_np();
    nl = orig.get_nl();
    filename = orig.get_filename();
    pic = (unsigned char*)calloc(nl * np * 3, sizeof(unsigned char));
    memccpy(pic, orig.get_pic(), nl * np * 3, sizeof(unsigned char));
}

Image::~Image() {
    free(pic);
}

int Image::get_nl()const{
    return nl;
}

int Image::get_np()const{
    return np;
}

std::string Image::get_filename()const{
    return filename;
}

unsigned char* Image::get_pic()const{
    return pic;
}

void Image::set_pixel(int i, int j, Couleur couleur){
    pic[i*3 + j*np*3]  = couleur.get_rouge_255();
    pic[i*3 + j*np*3 + 1] = couleur.get_vert_255();
    pic[i*3 + j*np*3 + 2]  = couleur.get_bleu_255();
};

void Image::save_to_ppm(){
    std::string ppm(".ppm");
    ppm = filename + ppm;
    std::ofstream fichier(ppm.c_str(), std::ios::trunc);
    if(fichier){
        fichier << "P6" << std::endl;
        fichier << np << " " << nl << std::endl;
        fichier << "255" << std::endl;
        for(int i = 0; i < np; i++)
            for(int j= 0; j < nl; j++)
                fichier << pic[i*3 + j*np*3] << pic[i*3 + j*np*3 + 1] << pic[i*3 + j*np*3 + 2];
        fichier.close();  // je referme le fichier
    }else
        std::cerr << "Erreur à l'ouverture !" << std::endl;
}

