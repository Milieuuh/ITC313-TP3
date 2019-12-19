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
string Encrypt::getMessageDechiffre() const
{
    return m_MessageDechiffre;
}

//Return le message chiffré
string Encrypt::getMessageCrypte() const
{
    return m_MessageCrypte;
}

/////////////////////////////////////////////////////////////Lecture et écriture
bool Encrypt::read(bool isPlain, string filename)
{
    bool res=false;
    ifstream monfichier(filename);

    //Message non chiffré
    if(isPlain!=true)
    {    
        //vérifie que l'ouverture s'esrt bien passée
        if(monfichier) 
        {
            res=true;
             //lecture
            char a;
            string ligne=0;

            //tant qu'on est pas  la ligne, on lit
            while(getline(monfichier,ligne))
            {
                cout<<ligne<<endl;
            }
           
            cout<<"coucou";
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

//////////////////////////////////////////////////////////// Méthodes implémentées par les classes filles
string Encrypt::encode()
{

}

string Encrypt::decode()
{

}
