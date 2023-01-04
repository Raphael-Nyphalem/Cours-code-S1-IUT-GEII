#include <iostream>

using namespace std;

const int NB_MAX =5;



void ex1()
{
    int monTableau[NB_MAX];

    for (int i = 0; i < NB_MAX; i++)
    {
        monTableau[i] = 10 * (i+1);
    }

    cout <<"Les valeurs du tableau sont : " <<endl;
    for (int i = 0; i < NB_MAX; i++)
    {
        cout << "element #"<< i <<" : "<< monTableau[i]<<endl;
    }

    cout << endl;


    for (int i = 0; i < NB_MAX; i++)
    {
        monTableau[i] -= 5;
    }

    cout <<"Les nouvelles valeurs du tableau sont : " <<endl;
    for (int i = 0; i < NB_MAX; i++)
    {
        cout << "element #"<< i <<" : "<< monTableau[i]<<endl;
    }

    
}




int main(int argc, char const *argv[])
{
    ex1();
    return 0;
}
