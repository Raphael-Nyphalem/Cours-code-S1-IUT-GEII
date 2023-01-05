#include <iostream>

using namespace std;

const int MAX =8;

void saisirValeur(int tabLues[MAX])
{
    int n;
    for (int i = 0; i < MAX; i++)
    {
        n=0;
        do
        {
            cout << "donner la valeur "<< i <<" entre 0 et 7: ";
            cin >> n;
        } while (n<0 || n>7);
        tabLues[i]= n;
    }
}

void afficheHistogramme(int tabAff[MAX])
{
    for (int x = 0; x < MAX; x++)
    {
        cout << x <<": ";
        for (int y = 0; y < tabAff[x]; y++)
        {
            //senseSetRGBpixel(x,y,255,0,0);
            cout<< "*";
        }
        cout <<endl;
    }
    
}

void ex1()
{
    int tabVal[MAX];
    saisirValeur(tabVal);
    afficheHistogramme(tabVal);
}


const int MAX_NORME_ACCEL = 10;

double calculNormeAccel(double xa,double ya, double zb)
{
    return sqrt(x*x+y*y+z*z)
}

double inNormeAccel(double min, double norme)
{
    double a;
    if (min < norme)
    {
        a= min;
    }
    else
    {
        a= norme;
    }
    return a;
}

void ex2()
{
    double x,y,z;
    double norme, min;
    min = MAX_NORME_ACCEL;

    for (int i = 0; i < 100; i++)
    {
        //senseGetAccelG(&x,&y,&z);
        norme = calculNormeAccel(x,y,z);
		min = minNormeAccel(min,norme);
        sleep_for(millisecond(100));
    }
    
}


int main(int argc, char const *argv[])
{
    ex1();
    return 0;
}
