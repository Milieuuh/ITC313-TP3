#include "encrypt.h"



int main()
{
    Encrypt e;
    string s="/fichiers_test/test.txt";
    e.read(true,s);
    return 0;
}