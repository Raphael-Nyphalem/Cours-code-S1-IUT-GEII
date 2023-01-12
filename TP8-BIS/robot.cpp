#include <iostream>

using namespace std;

const int CG[5]={0,0,0,0,1};
const int CD[5]={0,0,1,0,0};

void fordwardMove()
{
    cout<< "avance"<<endl;
}

void leftMove()
{
    cout<< "Tourne Gauche"<<endl;
}

void rightMove()
{
    cout<< "Tourne Droit"<<endl;
}

int main(int argc, char const *argv[])
{
    cout<< "Début du programme"<<endl<<endl;
    for (int i = 0; i < 5; i++)
    {
        if (CG[i]==0 && CD[i]==0)
        {
            fordwardMove();
        }
        else if (CG[i]==1 && CD[i]==0)
        {
            rightMove();
        }
        else if (CG[i]==0 && CD[i]==1)
        {
            leftMove();
        } 
    }
    cout<< "Fin du programme"<<endl<<endl;

    
    return 0;
}
