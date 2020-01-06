/**
* File:    caesar2.h
* Author:  GENTON Emilie BOUCQUEMONT Lucie
* Date:     06/01/2020
* Summary:  Implémentation de la classe Caesar2
*/

#ifndef _caesar2_h
#define _caesar2_h

#include <string>
#include "encrypt.h"
#include <iostream>

using namespace std;
class Caesar2: public Encrypt {

    public: 
        Caesar2(int lacle); 
        std::string encode(); 
        std::string decode();

    private:
        int cle; //décalage vers la droite 
        string nomFichier="C:/Users/lucie/Documents/GitHub/ITC313-TP3/fichiers_test/test.txt";

};

#endif // _caesar2_h