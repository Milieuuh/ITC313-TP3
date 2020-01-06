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
bool Encrypt::read(bool estChiffre, string filename)
{
    bool res=false;
    ifstream monfichier(filename);

    
    //vérifie que l'ouverture s'esrt bien passée
    if(monfichier) 
    {       
        //lecture
        string ligne;   
        //Message non chiffré
        if(estChiffre==false)
        {  
            //tant qu'on est pas  la ligne, on lit
            while(getline(monfichier,ligne))
            {
                cout<<ligne<<endl;
                m_MessageDechiffre+=ligne;
            }
             
        } 
        else
        {            
             //tant qu'on est pas  la ligne, on lit
            while(getline(monfichier,ligne))
            {
                cout<<ligne<<endl;
                m_MessageCrypte+=ligne;
            }
        }
           
        
        res=true;
    }
    else
    {
        cout<<"ERREUR: Impossible d'ouvrir le fichier en lecture."<<endl;
    }    

    return res;

}

bool Encrypt::write(bool estChiffre, string filename)
{
    bool res=false;
    ofstream monFichier(filename);


    if(monFichier)
    {
        res=true;
         //test pour testerà enlever après
       
        if(estChiffre==false)
        {
           
            monFichier<<m_MessageDechiffre<<endl;
        }
        else
        {
            monFichier<<m_MessageCrypte<<endl;
        }

    }
    else
    {
        cout<<"ERREUR: Impossible d'ouvrir le fichier."<<endl;
    }  

    return res;
}

//////////////////////////////////////////////////////////// Méthodes implémentées par les classes filles
string Encrypt::encode()
{
    m_MessageCrypte=m_MessageDechiffre;
    return m_MessageCrypte;
}

string Encrypt::decode()
{
    m_MessageDechiffre=m_MessageCrypte;
    return m_MessageDechiffre;
}
