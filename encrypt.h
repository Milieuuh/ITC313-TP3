
/** 
* File:     encrypt.h 
* Author:   Lucie BOUCQUEMONT
* Date:     19/12/2019 
* Summary:  Déclaration de la classe Encrypt
*/
#ifndef _encrypt_h
#define _encrypt_h

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class  Encrypt {
    public:
        Encrypt();
        string getMessageDechiffre() const;
        string getMessageCrypte() const;
        bool read(bool isPlain, string filename);
        bool write(bool isPlain, string filename);
        string encode();
        string decode();

    protected:
        string m_MessageDechiffre;
        string m_MessageCrypte;
};
#endif // _encrypt_h