#include <iostream>


float calculerPuissance(float inX,int inN)
{
    float res =1;
    for (int i = 0; i < inN; i++)
    {
        res = res*inX;
    }
    return res;
    
}

int saisieEntierPos()
{
    int n;
    do
    {
        std::cout <<"donner en entier naturel n: ";
        std::cin >> n;
    } while (n<0);
    return n;
    
}

int main(int argc, char const *argv[])
{
    int x,res;
    float n;

    std::cout <<"donné un réel x: ";
    std::cin >> x;
    n=saisieEntierPos();
    res = calculerPuissance(x,n);

    std::cout <<"resultat de "<<x
                <<" puissance "<<n
                <<" est "<<res
                <<std::endl;
    
    return 0;
}
