#include <iostream>
using namespace std;

void Bonjourlemonde(){
    string N;
    do
    {
        cout << "Bonjour le monde\n";
        cout << "tape N to stop\n";
        cin >> N;
        cout << "\n";

    } while (N != "N");
};

void HelloWord()
{
    int nbFois;

    cout << "Combien de fois on l'ecrit ?\n";
    cin >> nbFois;

    for (int i = 1; i <= nbFois; i++)
    {
        cout << "Hello World\n";
    }
};

void Programme_Mystère(){
    int res, n, i;
    cout << "entre n: ";
    cin>> n;
    res =1;
    for (int i = 1; i <= n; i++)
    {
        res = res *i;
    }
    cout <<"Le resultat est: "<< res<<"\n";
    
}

void Calcul_de_xn()
{
    int x,n,i,res;
    cout<<"quelle est la valeur de x: ";
    cin >> x;
    cout<<"quelle est la valeur de n: ";
    cin >> n;
    if (n<0)
    {
        cout << "ce programme ne permet pas ce calcul \n";
    }
    else if (n==0)
    {
        cout << 0;
    }
    else
    {
        res=1;
        for (i = 1; i <= n; i++)
        {
            res=res*x;
        }
        cout << res<<"\n";
        
    }
    
    
    
}


int main(int argc, char const *argv[])
{   
    int a;
    cout << "L'exercice choisi est le ";
    cin >> a;
    cout << "\n";
    switch (a)
    {
    case 1:
        Bonjourlemonde();
        break;
    case 2:
        HelloWord();
        break;
    case 3:
        Programme_Mystère();
        break;
    case 4:
        Calcul_de_xn();
        break;

    default:
        cout << "cette exercice n'exite pas \n";
        break;
    }
    
}

