
/** 
* File:     encrypt.h 
* Author:   Lucie BOUCQUEMONT
* Date:     19/12/2019 
* Summary:  Déclaration de la classe Encrypt
*/

#ifndef _encrypt_h
#define _encrypt_h

using namespace std;

class  Encrypt {
    public:
        Encrypt();
        string get\_plain() const;
        string get\_cipher() const;
        bool read(bool isPlain, string filename);
        bool write(bool isPlain, string filename);
        string encode();
        string decode();

    protected:
        string m_MessageDechiffre;
        string m_MessageCrypte;
};
#endif // _encrypt_h