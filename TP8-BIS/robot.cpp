#include <iostream>

using namespace std;

const int CG[5]={0,1,0,1,1};
const int CD[5]={0,1,1,0,1};

typedef int tab_t[2];

void fordwardMove();
void leftMove();
void rightMove();
void letfMotorControl(int pwm);
void rightMotorControl(int pwm);

void fordwardMove()
{
    cout<< "avance"<<endl;
    letfMotorControl(255);
    rightMotorControl(255);
}

void stop(){

    cout <<"stop" << endl;
    letfMotorControl(0);
    rightMotorControl(0);

}
void leftMove()
{
    cout<< "Tourne Gauche"<<endl;
    letfMotorControl(50);
    rightMotorControl(255);
}

void rightMove()
{
    cout<< "Tourne Droit"<<endl;
    letfMotorControl(255);
    rightMotorControl(50);
}

void letfMotorControl(int pwm){
    cout << "\t moteur gauche :" << pwm << endl;
}

void rightMotorControl(int pwm){
    cout << "\t moteur droit :" << pwm << endl;
}
int main(int argc, char const *argv[])
{
    cout<< "Début du programme"<<endl<<endl;

    tab_t tab;
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
        else if (CG[i]==1 && CD[i]==1)
        {
            stop();
        }
        
    }

    
    cout<< "Fin du programme"<<endl<<endl;

    
    return 0;
}
