/* File: tp1-ex1.cpp
 * Author: Philippe Latu
 * Source: https://github.com/platu/libsensehat-cpp
 * Modifier par: Valentin / Raphael G4 2022/2023
 *
 * Student lab template source file
 *
 * This program waits for the joystick button to be pressed
 */

#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

#include <sensehat.h>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // system_clock, seconds, milliseconds


int main() { 
    const rgb_pixel_t R = { .color = {255, 0, 0} }; // Red
    const rgb_pixel_t N = { .color = {0, 0, 0}}; //none
    const rgb_pixel_t G = { .color = {100, 100, 100}}; //Grey
    const rgb_pixel_t O = { .color = {255, 140, 0}}; //Orange
    const rgb_pixel_t Y = { .color = {255, 255, 0}}; //Yellow
    const rgb_pixel_t Br = { .color = {120, 60, 12}}; //Brown
    const rgb_pixel_t D = { .color = {50, 50, 50}}; //Brown
    rgb_pixels_t question_mark_RedOnWhite = { .array = {
        { N, G, G, N, N, N, N, G },
        { N, N, Y, O, N, N, N, O },
        { N, N, N, Y, Y, Y, Y, O },
        { O, O, N, Y, D, Y, Y, D },
        { O, O, N, R, Y, Y, Y, O },
        { N, Br,N, Y, O, O, O, N },
        { N, Br,Y, O, Y, O, Y, N },
        { N, N, Y, O,Br,Br, O, N } }
    };


    int count;
    // End of variables declarations
    
    if(senseInit()) {
        cout << "Sense Hat initialization Ok." << endl;
        // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        // Insert your code below !

        count = 0; 

        do {
            senseSetRGBpixels(question_mark_RedOnWhite);

            sleep_for(seconds(2));

            question_mark_RedOnWhite = senseFlip_h(true);

            count = count + 1;
        } while (count < 3);

        senseShowMessage("Nique ta race helios <3");
        
        //back flip
        senseSetRGBpixels(question_mark_RedOnWhite);
        sleep_for(milliseconds(500));
        for (int i=0; i!=4; i++){
            question_mark_RedOnWhite = senseRotation(90);
            senseSetRGBpixels(question_mark_RedOnWhite);
            sleep_for(milliseconds(200));
        }
        
    cout << "Press joystick button to quit." << endl;
    
        senseWaitForJoystickEnter();

        // Insert your code above !
        // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        senseShutdown();
    cout << "Sense Hat shut down." << endl;
    }
 
    return EXIT_SUCCESS;
}

