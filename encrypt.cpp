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
        //vérifie que l'ouverture s'esrt bien passée
        if(monfichier) 
        {
            res=true;
             //lecture
            char a;

            //tant qu'on est pas  la ligne, on lit
            while(getline(monfichier.get(a)))
            {
                cout<<a<<endl;
            }
           
            
        }
        else
        {
            cout<<"ERREUR: Impossible d'ouvrir le fichier en lecture."<<endl;
        }        
    }
    else
    {
        ifstream monficher(filename);
        if(monfichier)
        {
            //lecture
            char a;
            monfichier.getLine(a);
            
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
