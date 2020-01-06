/**
* File:    caesar2.cpp 
* Author:  GENTON Emilie BOUCQUEMONT Lucie
* Date:     06/01/2020
* Summary:  Implémentation de la classe Caesar2
*/

#include "caesar2.h"

Caesar2::Caesar2(int lacle)
{
    cle=lacle;
}

std::string Caesar2::encode()
{
    this->read(false,nomFichier); 
    string temp;

    //crypter
    for(char c :this->m_MessageDechiffre)
    {      
        for(int i=0;i<cle;i++)
        {
            c++;
            if(c>127)
            {
                c=0;
            }            
        } 
       temp+=c;
           
    }
    cout<<temp<<endl;

    //dans bonne variable
    m_MessageCrypte=temp;
    
    //écrire dans 
    this->write(true,nomFichier);
}

std::string Caesar2::decode()
{
    this->read(true,nomFichier); 
    string temp;

    //decrypter
    for(char c :this->m_MessageCrypte)
    {        
        for(int i=0;i<cle;i++)
        {
            c--;
            if(c<0)
            {
                c=127;
            }
        }       
       
       temp+=c;
           
    }
    cout<<temp<<endl;

    //dans bonne variable
    m_MessageDechiffre=temp;
    
    //écrire dans 
    this->write(false,nomFichier);
}