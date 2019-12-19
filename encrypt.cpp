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
    return m\_plain;
}

//Return le message chiffré
string Encrypt::get\_cipher() const
{
    return m\_cipher;
}

/////////////////////////////////////////////////////////////Lecture et écriture
bool Encrypt::read(bool isPlain, string filename)
{

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