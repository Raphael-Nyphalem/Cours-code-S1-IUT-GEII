#include<iostream>
using namespace std;

//Fonction exo 1
float formule(float coeffA,int nbInitial);
int factoriel(int n);
float inverse(float n);
float addition(float nb1,float nb2);
float puissance(float nb,int p);
void lire2Nombre(&a,&n);

//Fonction exo 2
void decomposer(int nb3,int& unit,int& diz,int& cent);//passage par refferance
int composer(int cent,int diz,int unit);


int main(int argc, char const *argv[])
{
    //test exo 1
    float res;
    float a;
    int n;
    a,n lire2Nombre(a,n);
    res=formule(a,n);
    cout << res <<endl;

    //test exo 2
    int abc= 367;
    int cent;
    int diz;
    int unit;
    decomposer(367,unit,diz,cent);
    int N1 = composer(unit,cent,diz);
    int N2 = composer(unit,diz,cent);
    int N3 = composer(diz,unit,cent);
    cout <<cent<<diz<<unit <<endl;
    cout <<N1<<endl;
    cout <<N2<<endl;
    cout <<N3<<endl;


    return 0;
}

//Fonction exo 1
float formule(float a,int n)
{
    int i;
    float res=0;
    for (i = 1; i <= n; i++)
    {
        res += addition(puissance(a,i),inverse(factoriel(i)));
    }
    return res;
    
}
int factoriel(int n)
{
    int res= 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    
    return res;
}
float inverse(float n)
{
    float res=0;
    if (n!=0)
    {
        res = 1/n;
    }
    else
    {
        cout << "error inverse de 0 "<<endl;
    }
    return res;
}
float addition(float nb1,float nb2)
{
    float res;
    res = nb1 +nb2;
    return res;
}
float puissance(float nb,int p)
{
    float res=1.0;
    for (int i = 0; i < p; i++)
    {
        res = res * nb;   
    }
    return res;
    
}
void lire2Nombre(&a,&n)
{
    cout << "donnez a et n";
    cin >> a,n;
}

//Fonction exo 2
void decomposer(int nb3,int& unit,int& diz,int& cent)
{

    unit = nb3%10;
    diz = ((nb3%100)/10);
    cent = nb3/100;

}
int composer(int cent,int diz,int unit)
{
    int res = cent * 100+diz*10+unit;
    return(res);
}