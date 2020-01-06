/**
* File:    caesar.cpp 
* Author:  GENTON Emilie
* Date:     19/12/2019 
* Summary:  Implémentation de la classe Caesar
*/

#include "caesar.h"

Caesar::Caesar()
{

}

std::string Caesar::encode()
{
    this->read(false,nomFichier); 
    string temp;

    //crypter
    for(char c :this->m_MessageDechiffre)
    {
        if(c>=97&&c<=122)
        {           
            
            for(int i=0;i<cle;i++)
            {
                c++;
                if(c>122)
                {
                    c=97;
                }
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

std::string Caesar::decode()
{
    this->read(true,nomFichier); 
    string temp;

    //decrypter
    for(char c :this->m_MessageCrypte)
    {
        if(c>=97&&c<=122)
        {
            for(int i=0;i<cle;i++)
            {
                c--;
                if(c<97)
                {
                    c=122;
                }
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