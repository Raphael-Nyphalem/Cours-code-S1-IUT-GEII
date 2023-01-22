#include <iostream>
#include <stdio.h>
void dba(bool &a,int &b,int c)
{
    a = !a;
    b=b+c;
}
int main(int argc, char const *argv[])
{
    bool vic = false;
    int yolo = 0;
    std::cout<<"vic: "<<vic<<" yolo: "<<yolo<<"\n";
    dba(vic,yolo,24);
    std::cout<<"vic: "<<vic<<" yolo: "<<yolo<<"\n";
    dba(vic,yolo,6);
    std::cout<<"vic: "<<vic<<" yolo: "<<yolo<<"\n";

    int value;
    char caractere=" ";
    do
    {
        caractere = getc();
        std::cout << caractere<< value << "\n";
    } while (true);
    

    return 0;
}
