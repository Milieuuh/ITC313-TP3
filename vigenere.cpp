/**
* File:    vigenere.cpp 
* Author:  GENTON Emilie BOUCQUEMONT Lucie
* Date:     06/01/2020
* Summary:  Implémentation de la classe vigenere
*/
#include "vigenere.h"

Vigenere::Vigenere()
{
  
}

/////////////////DEFINIR TABLE DE [I][J] !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

std::string Vigenere::encode()
{
    this->read(false,nomFichier); 
    string temp;

    for(char c :this->m_MessageDechiffre)
    { 
        for(int cl=0;cl<4;cl++)
        {
            for(int i=97;i<123;i++)
            {
                for(int j=97;j<123;j++)
                {
                   
                    if(i==c)
                    {
                        cout <<"couco" <<endl;
                        temp+=j;
                    }
                } 
            }
        }
    }

    cout <<temp <<endl;

    return m_MessageCrypte;

}

std::string Vigenere::decode()
{
    return m_MessageDechiffre;
}