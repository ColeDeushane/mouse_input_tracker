/*
 * Author: Cole Deushane
 * Date Created: 8 April 2019
 * Date Last Modified: 23 April 2019
*/

#ifndef EVENTS_H
#define EVENTS_H

struct KeyBoard {
    // returns true when key is pressed
    bool zero();
    bool one();
    bool two();
    bool three();
    bool four();
    bool five();
    bool six();
    bool seven();
    bool eight();
    bool nine();
    bool spacebar();
    bool enter();
    bool escape();
    bool backspace();
};

struct Mouse {
    // returns true when a the mouse is clicked
    bool leftClick();
    bool rightClick();
};

//=============================================================================
//=============================================================================
//=============================================================================

// returns a random number within a given range.
int random(int, int);

// sends a left click into the input stream
void leftClick();

// sends a right click into the input stream
void rightClick();

// sends a '0' keypress to the input stream
void press_0(INPUT&);

// sends a '1' keypress to the input stream
void press_1(INPUT&);

// sends a '2' keypress to the input stream
void press_2(INPUT&);

// sends a '3' keypress to the input stream
void press_3(INPUT&);

// sends a '4' keypress to the input stream
void press_4(INPUT&);

// sends a '5' keypress to the input stream
void press_5(INPUT&);

// sends a '4' keypress to the input stream
void press_6(INPUT&);

// sends a '7' keypress to the input stream
void press_7(INPUT&);

// sends a '8' keypress to the input stream
void press_8(INPUT&);

// sends a '9' keypress to the input stream
void press_9(INPUT&);

// sends a spacebar keypress to the input stream
void press_spacebar(INPUT&);

#endif //EVENTS_H
