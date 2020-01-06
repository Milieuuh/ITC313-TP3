#include "encrypt.h"
#include "caesar.h"
#include "caesar2.h"

int main()
{
    Encrypt e;
    //string s="C:/Users/lucie/Documents/GitHub/ITC313-TP3/fichiers_test/test.txt";

   /* e.read(false,s);
    
    e.write(false,s);

    e.read(true,s);*/

  /*  Caesar c(3);
    c.encode();
    c.decode();*/

    Caesar2 c2(3);
    cout<<"ENCODE"<<endl;
    c2.encode();
    cout<<" \nDECODE"<<endl;
    c2.decode();

    return 0;
}