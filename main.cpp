#include "encrypt.h"



int main()
{
    Encrypt e;
    string s="C:/Users/lucie/Documents/GitHub/ITC313-TP3/fichiers_test/test.txt";

    e.read(false,s);
    
    e.write(false,s);

    e.read(true,s);
    return 0;
}