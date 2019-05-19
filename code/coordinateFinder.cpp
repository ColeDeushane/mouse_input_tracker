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

void trackMouseInputs(std::ostream &xPrint, std::ostream &yPrint, int &index) {

	POINT currentPoint, previusPoint;	// used to determine mouse movements

	// initialize previusPoint
	previusPoint.x = 0;
	previusPoint.y = 0;

	KeyBoard keyEvent;      	// used to detect keyboard presses
	Mouse mouseEvent;			// used to detect mouse clicks
	bool running = true;    	// used to hold an infinite loop
	bool firstIteration = true;	// used to control the first iteration
	int count = 0;				// used to count clicks or key presses
    //int index = 0;              // used to track the amount of numbers printed

	while(running) {

		// initialize currentPoint
		GetCursorPos(&currentPoint);

		// If it is the first iteration of the program, print the cursor's
		// starting position, otherwise print the difference between the
		// x and y coordinates if movement is detected.

		if(firstIteration) {

            xPrint << currentPoint.x << ", ";
            yPrint << currentPoint.y << ", ";

			//print << currentPoint.x << ' ' << currentPoint.y << ' ' << '\n';
			firstIteration = false;
            index++;

		} else if(currentPoint.x != previusPoint.x ||
				  currentPoint.y != previusPoint.y) {

            xPrint << currentPoint.x - previusPoint.x << ", ";
            yPrint << currentPoint.y - previusPoint.y << ", ";
            index++;

			//print << currentPoint.x - previusPoint.x << ' '
			//	  << currentPoint.y - previusPoint.y << ' '
            //      << '\n';

		} else if( mouseEvent.rightClick() ) {

            xPrint << "4998, ";
            yPrint << ++count << ", ";
            index++;
			//print << "4998 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if( mouseEvent.leftClick() ) {

            xPrint << "4999, ";
            yPrint << ++count << ", ";
            index++;
			//print << "4999 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.zero() ) {

            xPrint << "5000, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5000 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.one() ) {

            xPrint << "5001, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5001 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.two() ) {

            xPrint << "5002, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5002 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.three() ) {

            xPrint << "5003, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5003 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.four() ) {

            xPrint << "5004, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5004 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.five() ) {

            xPrint << "5005, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5005 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.six() ) {

            xPrint << "5006, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5006 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.seven() ) {

            xPrint << "5007, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5007 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.eight() ) {

            xPrint << "5008, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5008 " << ++count << ' '
            //<< '\n';
			Sleep(200);

		} else if ( keyEvent.nine() ) {

            xPrint << "5009, ";
            yPrint << ++count << ", ";
            index++;
			//print << "5009 " << ++count << ' '
            //<< '\n';
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
