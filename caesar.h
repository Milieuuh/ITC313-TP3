/**
* File:    caesar.h 
* Author:  GENTON Emilie
* Date:     19/12/2019 
* Summary:  déclaration de la classe Caesar
*/

#ifndef _caesar_h
#define _caesar_h

#include <string>
#include "encrypt.h"

using namespace std;
class Caesar: public Encrypt {

    public: 
        Caesar(); 
        std::string encode(); 
        std::string decode();

    private:
        int cle = 3; //décalage vers la droite 
        string nomFichier="C:/Users/lucie/Documents/GitHub/ITC313-TP3/fichiers_test/test.txt";

};

#endif // _caesar_h