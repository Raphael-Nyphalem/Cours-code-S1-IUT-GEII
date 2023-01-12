#include <iostream>
#include <chrono>

using namespace std;
const int INIT_MESURES = 0;
const int MAX_MESURES = 60;

const int MAX_DIR= 9;

typedef double tab_cap_t[MAX_DIR];

string TAB_CARDINAL[9] = {"N","N.E.","E","S.E","S","S.W.","W","N.W.","N"};

void cardinal(double angle)
{
    double min,max;
    for (int i = 0; i <=360; i+=45)
    {
        min = i - 22.5;
        max = i + 22.5;
        if (angle => min && angle <= max)
        {
            senseShowMessage(TAB_CARDINAL[i/45]);
        }   
    }
}

void lireCaps(tab_cap_t &tab)
{
    double a;
    for (int i = 0; i < MAX_DIR; i++)
    {
        do
        {
            cin >> a;
        } while (/* condition */);
        
    }
    
}


int main(int argc, char const *argv[])
{
    double mesure[MAX_MESURES];

    if(initCompas())
    {
        senseSetIMUConfig(true, true, false);
        for (int i = INIT_MESURES; i < MAX_MESURES; i++)
        {
            mesure[i]=senseGetCompass();
            cout<<mesure[i];
            //cardinal(mesure[i]);
            sleep_for(milliseconds(500));
        }
        
    }
    return 0;
}
