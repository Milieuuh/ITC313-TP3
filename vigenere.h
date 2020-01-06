/**
* File:    vigenere.h 
* Author:  GENTON Emilie BOUCQUEMONT Lucie
* Date:     06/01/2020
* Summary:  Implémentation de la classe vigenere
*/

#ifndef _vigenere_h
#define _vigenere_h

#include <string>
#include "encrypt.h"
#include <iostream>

using namespace std;
class Vigenere: public Encrypt {
    public:
        Vigenere();
        std::string encode(); 
        std::string decode();

    private: 
        int cle[4]={3,1,5,2};
        string nomFichier="C:/Users/lucie/Documents/GitHub/ITC313-TP3/fichiers_test/test.txt";
};

#endif // _vigenere_h