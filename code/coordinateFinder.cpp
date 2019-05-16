/*
 * Author: Cole Deushane
 * Date Created: 8 April 2019
 * Date Last Modified: 16 May 2019
*/

#include <iostream>
#include <windows.h>

#include "coordinateFinder.h"
#include "events.h"

//=============================================================================
//=============================================================================
//=============================================================================

void findCoord(std::ostream &print) {

    KeyBoard keyEvent;      // used to detect key presses
    POINT screenPt;         // used to store and display pixel coordinates
    bool running = true;    // used to hold an infinite loop

    while(running) {

        if(keyEvent.spacebar()){

            GetCursorPos(&screenPt);
            print << screenPt.x << ' ' << screenPt.y << ' ' << std::endl;
            Sleep(200);

        } else if(keyEvent.zero()){

            print << "key-zero " << std::endl;
            Sleep(200);

        } else if(keyEvent.one()){

            print << "key-one " << std::endl;
            Sleep(200);

        } else if(keyEvent.two()){

            print << "key-two " << std::endl;
            Sleep(200);

        } else if(keyEvent.three()){

            print << "key-three " << std::endl;
            Sleep(200);

        } else if(keyEvent.four()){

            print << "key-four " << std::endl;
            Sleep(200);

        } else if(keyEvent.five()){

            print << "key-five " << std::endl;
            Sleep(200);

        } else if(keyEvent.six()){

            print << "key-six " << std::endl;
            Sleep(200);

        } else if(keyEvent.seven()){

            print << "key-seven " << std::endl;
            Sleep(200);

        } else if(keyEvent.eight()){

            print << "key-eight " << std::endl;
            Sleep(200);

        } else if(keyEvent.nine()){

            print << "key-nine " << std::endl;
            Sleep(200);

        } else if(keyEvent.escape()){

            running = false;
            Sleep(200);

        } else { /* no default case */ }
    }
}

//=============================================================================
//=============================================================================
//=============================================================================

void trackMouseInputs(std::ostream &print) {

	POINT currentPoint, previusPoint;	// used to determine mouse movements

	// initialize previusPoint
	previusPoint.x = 0;
	previusPoint.y = 0;

	KeyBoard keyEvent;      	// used to detect keyboard presses
	Mouse mouseEvent;			// used to detect mouse clicks
	bool running = true;    	// used to hold an infinite loop
	bool firstIteration = true;	// used to control the first iteration
	int count = 0;				// used to count clicks or key presses

	while(running) {

		// initialize currentPoint
		GetCursorPos(&currentPoint);

		// If it is the first iteration of the program, print the cursor's
		// starting position, otherwise print the difference between the
		// x and y coordinates if movement is detected.

		if(firstIteration) {

			print << currentPoint.x << ' ' << currentPoint.y << ' ' << '\n';
			firstIteration = false;

		} else if(currentPoint.x != previusPoint.x ||
				  currentPoint.y != previusPoint.y) {

			print << previusPoint.x - currentPoint.x << ' '
				  << previusPoint.y - currentPoint.y << ' '
                  << '\n';

		} else if( mouseEvent.rightClick() ) {

			print << "4998 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if( mouseEvent.leftClick() ) {

			print << "4999 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.zero() ) {

			print << "5000 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.one() ) {

			print << "5001 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.two() ) {

			print << "5002 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.three() ) {

			print << "5003 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.four() ) {

			print << "5004 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.five() ) {

			print << "5005 " << ++count << ' '
            << "* ";
			Sleep(200);

		} else if ( keyEvent.six() ) {

			print << "5006 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.seven() ) {

			print << "5007 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.eight() ) {

			print << "5008 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if ( keyEvent.nine() ) {

			print << "5009 " << ++count << ' '
            << '\n';
			Sleep(200);

		} else if( keyEvent.escape() ) {

			running = false;
			Sleep(200);

		} else { /* no default case */ }

		// at the end of each iteration, pass down the
		// coordinates of currentPoint

		previusPoint.x = currentPoint.x;
		previusPoint.y = currentPoint.y;

	}
}

//=============================================================================
//=============================================================================
//=============================================================================
