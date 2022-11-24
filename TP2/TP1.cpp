#include<iostream>

//#include <sensehar.h> /

void ex1()
{
    const int X =0;
    const int Y =0;
    int choix;
    int r,g,b;

    std::cout << "Choisissez votre couleur\n'1' pour rouge\n'2' pour vert\n'3' pour bleu\n";
    std::cin >> choix;

    switch (choix)
    {
    case 1:
        r,g,b = 255,0,0;
        break;
    case 2:
        r,g,b = 0,255,0;
        break;
    
    case 3: 
        r,g,b = 0,0,255;
        break;
    }
    //senseSetRGBpixel(x,y,R,G,B);
}

void ex2()
{
    const int X =0;
    const int Y =0;
    int choix;
    int r,g,b;

    do{
    std::cout << "Choisissez votre couleur\n'1' pour rouge\n'2' pour vert\n'3' pour bleu\n";
    std::cin >> choix;

    switch (choix)
    {
    case 1:
        r,g,b = 255,0,0;
        break;
    case 2:
        r,g,b = 0,255,0;
        break;
    
    case 3: 
        r,g,b = 0,0,255;
        break;
    }
    //senseSetRGBpixel(x,y,R,G,B);
    }while (choix !=4)
    

}

void ex3()
{
    int x=0;
    int y=0;
    int R,G,B
    cout << "Pour arreter metter 0 a toute les couleurs\n"
        << "Choisez la quantier de rouge (entre O et 255)\n";
    cin >> R;
    cout << "Choisez la quantier de vert (entre O et 255)\n";
    cin >> G;
    cout << "Choisez la quantier de bleu (entre O et 255)\n":
    cin >>B;
}

int main(int argc, char const *argv[])


{
    ex1();
    return 0;
}
