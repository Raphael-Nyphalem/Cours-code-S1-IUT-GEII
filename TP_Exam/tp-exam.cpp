#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

#include <sensehat.h>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // system_clock, seconds, milliseconds

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Début constantes
const int MAX = 8;
// Fin constantes ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Début sous-programmes

// Fin sous-programmes ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main() {
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Début variables
	int x, y, step;
	uint8_t red, green, blue;
	int i,boucle;
	/*
	*/
	// Fin variables ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	if(senseInit()) {
		cout << "Sense Hat initialization Ok." << endl;
		// ~~~~~~~~~~~~~~~~~~~~~~~~ Début instructions
		do
		{
			cout << "donnez le nombre de boucle a faire (min 1): ";
			cin >> boucle;
		} while (boucle<1 );
		
		red = 0;
		green = 255;
		blue = 128;
		for (i = 0; i < boucle; i++)
		{
			for (step = 1; step <= 6; step++)
			{
				senseRGBClear(0,0,0);
				for (x = 0; x < MAX - step; x++) {
					for(y = 0; y <= x; y++) {
						senseSetRGBpixel(x + step, y, red, green, blue);
						red = red + 64;
						green = green - 32;
						blue = blue + 16;	
					}
				}
				
				for (x = 0; x < MAX - step; x++) {
					for(y = MAX; y > x + step; y--) {
						senseSetRGBpixel(x, y-1, red, green, blue);
						red = red + 64;
						green = green - 32;
						blue = blue + 16;	
					}
				}
				sleep_for(milliseconds(20));
			}
		}
		// Fin instructions ~~~~~~~~~~~~~~~~~~~~~~~~~~
		cout << "Press joystick button to quit." << endl;
		senseWaitForJoystickEnter();

		senseShutdown();
		cout << "Sense Hat shut down." << endl;
	}
	return EXIT_SUCCESS;
}