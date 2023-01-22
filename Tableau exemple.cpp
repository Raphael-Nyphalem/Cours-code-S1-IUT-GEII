#include <iostream>

//déclaration Globale
const int TAILLEMAX = 20;
const int LIGNEMAX =5;
const int COLONEMAX =5;

using namespace std;


void affichetab(float Tab[TAILLEMAX])
{
    for (int idx = 0; idx < TAILLEMAX; idx++)
    {
        cout << Tab[idx]<<" ";
    }
    cout<< endl;
}

void changetab(float Tab[TAILLEMAX])
{
    int valtab[TAILLEMAX]= {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};

    for (int i = 0; i < TAILLEMAX; i++)
    {
        Tab[i]=valtab[i];
    }
}


int main(int argc, char const *argv[])
{
    //Déclaration des variables local
    float tab1[TAILLEMAX];
    int tab2[LIGNEMAX][COLONEMAX];
    int idx;

    int x;
    int y;

    //action
    //init tab1 a 0
    affichetab(tab1);
    cout << endl << endl;

    for ( idx = 0; idx < TAILLEMAX; idx++)
    {
        tab1[idx]=0;
    }
    
    affichetab(tab1);
    changetab(tab1);
    affichetab(tab1);
    
    for (x= 0; x < LIGNEMAX; x++)
    {
        for (y = 0; y < COLONEMAX; y++)
        {
            tab2[x][y] = 0;
        }
        
    }
    
    
    return 0;
}
