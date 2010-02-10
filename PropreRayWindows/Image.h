#ifndef _IMAGE_H
#define	_IMAGE_H

#include <string>

class Couleur;

class Image {
    private:
        unsigned char* pic;
        int nl;
        int np;
        std::string filename;

    public:
        Image();
        Image(int n_np, int n_nl, char* n_filename);
        Image(int n_np, int n_nl, std::string n_filename);
        Image(const Image& orig);
        virtual ~Image();

        int get_nl()const;
        int get_np()const;
        std::string get_filename()const;
        unsigned char* get_pic()const;

        void set_pixel(int i, int j, Couleur couleur);
        void save_to_ppm();


};
#endif	/* _IMAGE_H */

