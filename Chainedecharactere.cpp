#include <iostream>
#include <cstring>
#include <string>
using namespace std;
/*
Les tableau de caractère sont dees tableauxx partivuliers
    Taille: capacité nb max de caractère de la chaine
    Longueur: nb de caractère utiles
    Caractère de "fin de chaine" nul ou "\0" (ce caractère particulier indique que la chaine de caractère est finie)

    ex:
    "SALUT"
        cahine de 6 caractères:
            5 caractère réel
            le caractère nul

*/


int main(int argc, char const *argv[])
{
    //c++
    char greeting[] = "Hello";
    cout << greeting << endl;

    char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << greeting1 << endl;

    printf("test %c%c%c%c%c%c \n",greeting1[0]
                                ,greeting1[1]
                                ,greeting1[2]
                                ,greeting1[3]
                                ,greeting1[4]
                                ,greeting1[5]);

    //cstring
    char txt[10] = "salut mec";
    cout << txt<<endl;

    char txt2[20] = "test ";
    strcat(txt2,txt);
    cout << txt2<<endl;

    //string
    string test;
    test = "hello world";
    cout << test<<endl;

    string test2= test+ " "+test;
    cout << test2<<endl;
    return 0;
}

/*


strlent()   : renvoie la longueur d'une chaine
strcpy()    : copie une chaine dans une autre
srtcat()    : concatène 2 chaine
itoi()      : conversion d'un entier en chaine
atoi()      : conversion d'une chaine en eentier
strcmp()    : Compare deux chaine

*/