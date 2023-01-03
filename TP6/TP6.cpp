#include <iostream>
#include <cstdlib>

using namespace std;

void allumerLigne(int numLigne)
{
    for (int x = 0; x <=7 ; x++)
    {
        //senseSetRGBpixel(x,numLigne,255,0,0);
        cout<<x<<" "<<numLigne<<endl;
    }
}

int saisirNumLigne()
{
    int ligne;
    do
    {
        cout<<"donnez le num de ligne entre 0 et 7\n";
        cin>>ligne;

    } while (ligne>7 || ligne<0);
    return ligne;
}

void ex1()
{
    int ligne;
    ligne = saisirNumLigne();
    allumerLigne(ligne);
}

void allumeAleaPixel(int numColonne,int numLigne)
{
    /*
    uint8_t r;
    uint8_t g;
    uint8_t b;
    */
    int r,g,b;
    r = rand()%256;
    g = rand()%256;
    b = rand()%256;
    //senseSetRGBpixel(numColonne,numLigne, r, g, b);
    cout<<r<<" "<<g<<" "<<b<<" "<<numColonne<<" "<<numLigne<<endl;
}

void allumerLigneAlea(int numLigne)
{
    for (int x = 0; x <=7 ; x++)
    {
        allumeAleaPixel(x,numLigne);
    }
}

void allumerMatriceAlea()
{
    for (int y = 0; y <=7 ; y++)
    {
        allumerLigneAlea(y);
    }
}

void ex2()
{
    allumerMatriceAlea();
}


void afficherDirectionJoystick()
{
    stick_t event;
    int choix
    event = senseWaitForJoystick(); 
    choix=event.action;

    switch (choix)
    {
    case KEY_DOWN:
        senseShowLetter(‘S’);
        break;
    case KEY_UP:
        senseShowLetter(‘N’);
        break;
    case KEY_LEFT:
        senseShowLetter(‘W’);
        break;
    case KEY_RIGHT:
        senseShowLetter(‘E’);
        break;
    case KEY_ENTER:
        senseClear();
        break;

    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    ex2();
    return 0;
}
