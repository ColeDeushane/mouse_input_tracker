/*
 * Author: Cole Deushane
 * Date Created: 8 April 2019
 * Date Last Modified: 16 May 2019
*/

#include <iostream>
#include <windows.h>
#include <fstream>

#include "coordinateFinder.h"
#include "events.h"

int main() {

    bool running = true;
    KeyBoard keyEvent;

    std::ofstream file;
    file.open("DATA.txt");

    if(!file)
        return -1;

    SetConsoleTitle("Mouse Tracker");

    std::cout << std::string(50, '-') << std::endl
         << "Mouse Tracker\n"
         << "1.) - press the spacebar to begin tracking mouse input.\n"
         << "2.) - Data is outputted to a file names \"DATA.txt\"\n"
         << "3.) - press Esc to exit.\n"
         << std::string(50, '-') << std::endl;

    while(running) {
        if( keyEvent.spacebar() ) {
            running = false;
            Sleep(200);
        }
    }

    trackMouseInputs(file);

    file.close();
    return 0;
}
