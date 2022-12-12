#include <iostream>
using namespace std;

const int LIGNEMAX =5;
const int COLONEMAX =5;


typedef int montypegrille[LIGNEMAX][COLONEMAX];
montypegrille matrice_t;


typedef struct{
    int x;
    int y;
    float val;
}grilledereel;

int main(int argc, char const *argv[])
{
    grilledereel a = {8,0,28.9};
    cout << a.x << " "<< a.y <<" "<< a.val<<endl;
    return 0;
}
