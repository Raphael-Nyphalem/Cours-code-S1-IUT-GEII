#include<iostream>
using namespace std;
void allumerColonneVert (int uneColonne)
{
    
    for ( int y = 0; y <= 7 ; y++)
    {
        //senseSetRGBpixel(uneColonne,y,0, 255, 0);
        
    }
}

void allumerColonneCouleur(int uneColonne,int uneCouleur)
{
    int r,g,b;
    switch (uneCouleur)
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

    default:
        r,g,b = 255,255,255;
        break;
    }

    for (int y = 0; y <=7; y++)
    {
        //senseSetRGBpixel(uneColonne,y,r, g, b)
    }
    
}

int saisieNumColonne()
{
    int laColonne;
    do
    {
        cin >> laColonne;
    } while (laColonne<0 or laColonne>7);
    return laColonne;
}
int saisieNumCouleur()
{
    int laCouleur;
    do
    {
        cin >> laCouleur;
    } while (laCouleur<0 || laCouleur>7);
    return laCouleur;
}

void ex1()
{
    int laColonne;
    do
    {
        cin >> laColonne;
    } while (laColonne < 0 || laColonne > 3);
    allumerColonneVert(laColonne);

}

void ex2()
{
    int laColonne,laCouleur;

    do{
        cin >> laColonne;
    } while (laColonne < 0 or laColonne > 7);
    cin >> laCouleur;
    allumerColonneCouleur(laColonne,laCouleur);
 

}

void ex3()
{
    int laColonne,laCouleur;
    laCouleur = saisieNumCouleur();
    laColonne = saisieNumColonne();
    allumerColonneCouleur(laColonne,laCouleur);
}

int main(int argc, char const *argv[])
{


}
