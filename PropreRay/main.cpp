/*
 * File:   main.cpp
 * Author: paul
 *
 * Created on 7 février 2010, 00:30
 */

#include <stdlib.h>

#include "Point4D.h"
#include "Vecteur4D.h"
#include "Matrice4D.h"

/*
 *
 */
int main(int argc, char** argv) {
    Vecteur4D v_1(1,2,3);
    Vecteur4D v_2(4,5,6);
    Vecteur4D v_3(7,8,9);
    Matrice4D m_1(v_1,v_2,v_3);
    m_1.print_console();
    return (EXIT_SUCCESS);
}

