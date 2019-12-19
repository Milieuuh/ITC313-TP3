/** 
* File:     encrypt.h 
* Author:   Lucie BOUCQUEMONT
* Date:     19/12/2019 
* Summary:  Déclaration de la classe Encrypt
*/

#include "encrypt.h"

Encrypt::Encrypt()
{

}

//////////////////////////////////////////////////////////////GETTER
//Return le message déchiffré
string Encrypt::get\_plain() const
{
    return m_MessageDechiffre;
}

//Return le message chiffré
string Encrypt::get\_cipher() const
{
    return m_MessageCrypte;
}

/////////////////////////////////////////////////////////////Lecture et écriture
bool Encrypt::read(bool isPlain, string filename)
{
    bool res=false;

    //Message non chiffré
    if(isPlain!=true)
    {        
        ifstream monficher(filename);
        if(monfichier)
        {
            string ligne;
            getLigne
            //lecture
            res=true;
        }
        else
        {
            cout<<"ERREUR: Impossible d'ouvrir le fichier en lecture."<<endl;
        }
        
    }

    return res;

}

bool Encrypt::write(bool isPlain, string filename)
{

}

////////////////////////////////////////////////////////////
string Encrypt::encode()
{

}
string Encrypt::decode()
{

}