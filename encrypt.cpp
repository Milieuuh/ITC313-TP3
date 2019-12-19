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

string Encrypt::get\_plain() const
{
    return m\_plain;
}

string Encrypt::get\_cipher() const
{
    return m\_cipher;
}
bool Encrypt::read(bool isPlain, string filename)
{

}

bool Encrypt::write(bool isPlain, string filename)
{

}

string Encrypt::encode()
{

}
string Encrypt::decode()
{

}