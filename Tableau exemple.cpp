//déclaration Globale
const int TAILLEMAX = 20;
const int LIGNEMAX =5;
const int COLONEMAX =5;

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
    for ( idx = 0; idx < TAILLEMAX; idx++)
    {
        tab1[idx]=0;
    }

    
    for (x= 0; x < LIGNEMAX; x++)
    {
        for (y = 0; y < COLONEMAX; y++)
        {
            tab2[x][y] = 0;
        }
        
    }
    
    
    return 0;
}
