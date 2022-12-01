#include <iostream>
#include <chrono>
#include <thread>


void Allumer_les_pixels()
{
    char var;

    //senseSetRGBpixel(0,0,255,255,255)
    std::cout << "on allume le pixel a la position 0,0"<< std::endl;

    do
    {

        std::cout << "var: ";
        std::cin >> var;

        if (var =='O')
        {
            //senseSetRGBpixel(1,0,255,255,255)
            std::cout << "on allume le pixel a la position 1,0"<< std::endl;
        }
        
    } while (var != 'N'); 
}

void Chenillard()
{
        char var;

    //senseSetRGBpixel(0,0,255,255,255)
    std::cout << "on allume le pixel a la position 0,0"<< std::endl;

    do
    {

        std::cout << "var: ";
        std::cin >> var;

        if (var =='O')
        {
            //senseSetRGBpixel(0,0,255,255,0)
            std::cout << "le pixel passe en jaune a la position 0,0"<< std::endl;

            //senseSetRGBpixel(1,0,255,255,255)
            std::cout << "on allume le pixel a la position 1,0"<< std::endl;
        }
        
    } while (var != 'N');

}

void Barre_de_progression()
{
    int x;
    for (x = 0;x <=7 ; x++)
    {
        //senseSetRGBpixel(x,0,255,255,255)
        std::cout << "on allume le pixel a la position " <<x<<",0"<< std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500) ); 
    }
    
}

void Barre_de_progression_avec_y()
{
    int x,y;
    for (y = 0; y <=7; y++)
    {
        for (x = 0;x <=7 ; x++)
        {
            //senseSetRGBpixel(x,0,255,255,255)
            std::cout << "on allume le pixel a la position " <<x<<",0"<< std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500) ); 
        }
    }
    
}

void ex5()
{
    int x,y,b;
    for (b=0; b<=14; b++)
    {
       for (x=0 ; x<=7; x++)
       {
            y= -x+b;
            //senseSetRGBpixel(x,y,255,0,0);
       }
       std::this_thread::sleep_for(std::chrono::milliseconds(500) ); 
    }
}


int main(int argc, char const *argv[])
{
    Allumer_les_pixels();
    Chenillard();
    return 0;
}
