#include <iostream>
using namespace std;

float MOYENNE_MATIERE_POUR_PASSER = 8;
float MOYENNE_SEMESTRE_POUR_PASSER = 10;

float moyenneUE1, moyenneUE2, moyenneUE3,moyenneSemestre;
bool critere1, critere2;

int main()
{   
    cout << "moyenneUE1: ";
    cin >> moyenneUE1;
    cout << "moyenneUE2: ";
    cin >> moyenneUE2;
    cout << "moyenneUE3: ";
    cin >> moyenneUE3;

    moyenneSemestre = (moyenneUE1 + moyenneUE2 + moyenneUE3)/3;

    critere1 = (moyenneSemestre >= MOYENNE_SEMESTRE_POUR_PASSER);

    if (moyenneUE1 < MOYENNE_MATIERE_POUR_PASSER)
    {
        critere2 = false;
    }
    else if (moyenneUE2 < MOYENNE_MATIERE_POUR_PASSER)
    {
        critere2 = false;
    }
    else if (moyenneUE3 < MOYENNE_MATIERE_POUR_PASSER)
    {
        critere2 = false;
    }
    else
    {
        critere2 = true;
    }

    if (critere1)
    {
        if (critere2)
        {
            cout << "\nsemestre valider \n";
        }
        else{
            cout << "\ndecision du jury \n";
        }   
    }
    else{
        cout << "\nredoublement \n";
    }
}