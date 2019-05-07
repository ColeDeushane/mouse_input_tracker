/*
 * Author: Cole Deushane
 * Description: function definitions for input and output
 * Date Created: 8 April 2019
 * Date Last Modified: 23 April 2019
*/

#include <iostream>
#include <windows.h>
#include <winuser.h>

#include "events.h"

//=============================================================================
//=============================================================================
//=============================================================================

// returns true if the left mouse button is clicked
bool Mouse::leftClick() {
    bool flag = false;
    if(GetAsyncKeyState(VK_LBUTTON))
        flag = true;
    return flag;
}

// returns true if the right mouse button is clicked
bool Mouse::rightClick() {
    bool flag = false;
    if(GetAsyncKeyState(VK_RBUTTON))
        flag = true;
    return flag;
}

// returns true when the zero key is pressed
bool KeyBoard::zero() {
    bool flag = false;
    if(GetAsyncKeyState(0x30))
        flag = true;
    return flag;
}

// returns true when the one key is pressed
bool KeyBoard::one() {
    bool flag = false;
    if(GetAsyncKeyState(0x31))
        flag = true;
    return flag;
}

// returns true when the two key is pressed
bool KeyBoard::two() {
    bool flag = false;
    if(GetAsyncKeyState(0x32))
        flag = true;
    return flag;
}

// returns true when the three key is pressed
bool KeyBoard::three() {
    bool flag = false;
    if(GetAsyncKeyState(0x33))
        flag = true;
    return flag;
}

// returns true when the four key is pressed
bool KeyBoard::four() {
    bool flag = false;
    if(GetAsyncKeyState(0x34))
        flag = true;
    return flag;
}

// returns true when the five key is pressed
bool KeyBoard::five() {
    bool flag = false;
    if(GetAsyncKeyState(0x35))
        flag = true;
    return flag;
}

// returns true when the six key is pressed
bool KeyBoard::six() {
    bool flag = false;
    if(GetAsyncKeyState(0x36))
        flag = true;
    return flag;
}

// returns true when the seven key is pressed
bool KeyBoard::seven() {
    bool flag = false;
    if(GetAsyncKeyState(0x37))
        flag = true;
    return flag;
}

// returns true when the eight key is pressed
bool KeyBoard::eight() {
    bool flag = false;
    if(GetAsyncKeyState(0x38))
        flag = true;
    return flag;
}

// returns true when the nine key is pressed
bool KeyBoard::nine() {
    bool flag = false;
    if(GetAsyncKeyState(0x39))
        flag = true;
    return flag;
}

// returns true when the spacebar is pressed
bool KeyBoard::spacebar() {
    bool flag = false;
    if(GetAsyncKeyState(VK_SPACE))
        flag = true;
    return flag;
}

// returns true when the enter key is pressed
bool KeyBoard::enter() {
    bool flag = false;
    if(GetAsyncKeyState(VK_RETURN))
        flag = true;
    return flag;
}

// returns true when the escape key is pressed
bool KeyBoard::escape() {
    bool flag = false;
    if(GetAsyncKeyState(VK_ESCAPE))
        flag = true;
    return flag;
}

// returns true when the backspace key is pressed
bool KeyBoard::backspace() {
    bool flag = false;
    if(GetAsyncKeyState(VK_BACK))
        flag = true;
    return flag;
}

//=============================================================================
//=============================================================================
//=============================================================================

// returns a random number within a given range.
int random(int min, int max) {
    if(min > max)
        std::swap(min, max);
    return (rand() % (max - min + 1) + min);
}

// sends a left click into the input stream
void leftClick() {
    INPUT Input={0};
    // left down
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    ::SendInput(1,&Input,sizeof(INPUT));

    // left up
    ::ZeroMemory(&Input,sizeof(INPUT));
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
    ::SendInput(1,&Input,sizeof(INPUT));
}

// sends a right click into the input iostream
void rightClick() {
    INPUT Input={0};
    // right down
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
    ::SendInput(1,&Input,sizeof(INPUT));

    // right up
    ::ZeroMemory(&Input,sizeof(INPUT));
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
    ::SendInput(1,&Input,sizeof(INPUT));
}

// sends a '0' keypress to the input stream
void press_0(INPUT &key) {
    key.ki.wScan = '0';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '1' keypress to the input stream
void press_1(INPUT &key) {
    key.ki.wScan = '1';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '2' keypress to the input stream
void press_2(INPUT &key) {
    key.ki.wScan = '2';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '3' keypress to the input stream
void press_3(INPUT &key) {
    key.ki.wScan = '3';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '4' keypress to the input stream
void press_4(INPUT &key) {
    key.ki.wScan = '4';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '5' keypress to the input stream
void press_5(INPUT &key) {
    key.ki.wScan = '5';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '6' keypress to the input stream
void press_6(INPUT &key) {
    key.ki.wScan = '6';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '7' keypress to the input stream
void press_7(INPUT &key) {
    key.ki.wScan = '7';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '8' keypress to the input stream
void press_8(INPUT &key) {
    key.ki.wScan = '8';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a '9' keypress to the input stream
void press_9(INPUT &key) {
    key.ki.wScan = '9';
    SendInput(1, &key, sizeof(INPUT));
}

// sends a 'spacebar' keypress to the input stream
void press_spacebar(INPUT &key) {
    key.ki.wScan = VK_SPACE;
    SendInput(1, &key, sizeof(INPUT));
}

//=============================================================================
//=============================================================================
//=============================================================================
