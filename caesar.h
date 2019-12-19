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

};

#endif // _caesar_h