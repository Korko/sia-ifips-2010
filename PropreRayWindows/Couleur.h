#ifndef _COULEUR_H
#define	_COULEUR_H

class Couleur {
    private:
	float rouge;
	float vert;
	float bleu;

    public:
        Couleur();
        Couleur(float r, float v, float b);
        Couleur(int r, int v, int b);
        Couleur(const Couleur& orig);
        virtual ~Couleur();

        Couleur operator+(Couleur& c_b);
        Couleur operator-(Couleur& c_b);

        float get_rouge()const;
        void set_rouge(const float n_rouge);
        int get_rouge_255()const;
        void set_rouge_255(const int n_rouge);
        float get_vert()const;
        void set_vert(const float n_vert);
        int get_vert_255()const;
        void set_vert_255(const int n_vert);
        float get_bleu()const;
        void set_bleu(const float n_bleu);
        int get_bleu_255()const;
        void set_bleu_255(const int n_bleu);

};

#endif	/* _COULEUR_H */

