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

double calculNormeAccel(double xa,double ya, double za)
{
    return sqrt(xa*xa+ya*ya+za*za);
}

double minNormeAccel(double min, double norme)
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
    double normeAccel, normeMin;
    normeMin = MAX_NORME_ACCEL;

    for (int i = 0; i < 100; i++)
    {
        sleep_for(milliseconds(100));
        if (senseGetAccelG(x, y, z)) {
            cout << showpos << fixed << setprecision(6) 
            << "x = " << x
            << " y = " << y
            << " z = " << z;

            normeAccel = calculNormeAccel(x, y, z);
            normeMin = minNormeAccel(normeAccel, normeMin);

            cout << "\t-> norme accélération : " << normeAccel << endl;
        }
        else
        {
            cout << "Pas de mesure disponible." << endl;
        }
        cout << "La norme minimale d'accélération mesurée est : " << normeMin << endl;
    }
    
}

int conversionLineaire(double acc_norm)
{
    int y_bits;
    y_bits = 7/0.9 * acc_norm - 7.9/0.9;
    return y_bits;
}


const int NB_MESURE = 10;

void ex3()
 {
    double x,y,z;
    double normeAccel, normeMin;
    int tabVal[MAX];
    int val;

    for (int e = 0; e < MAX; e++)
    {
        normeMin = MAX_NORME_ACCEL;

        for (int i = 0; i < NB_MESURE; i++)
        {
            
            sleep_for(milliseconds(100));
            if (senseGetAccelG(x, y, z)) {
                
                /*
                cout << showpos << fixed << setprecision(6) 
                << "x = " << x
                << " y = " << y
                << " z = " << z;
                */

                normeAccel = calculNormeAccel(x, y, z);
                normeMin = minNormeAccel(normeAccel, normeMin);

                cout << "\t-> norme accélération : " << normeAccel << endl;
            }
            else
            {
                cout << "Pas de mesure disponible." << endl;
            }
            cout << "La norme minimale d'accélération mesurée est : " << normeMin << endl;

        }
        val = conversionLineaire(normeMin);
        tabVal[e]=val;
        
    }
    afficheHistogramme(tabVal);
    
    
 }


int main(int argc, char const *argv[])
{
    ex1();
    ex2();
    return 0;
}
