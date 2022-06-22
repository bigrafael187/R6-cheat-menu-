
#include <iostream>
#include <Windows.h>
using namespace std;

struct Pfitty {

    void Ratatata() {

        cout << "Num1 = P90 Num2 = AK Num3 = M4A1-S " << endl;

        POINT point;

        while (GetKeyState(VK_LBUTTON) & 1) {
            if (GetCursorPos(&point)) {
                cout << point.x << "10000" << point.y << "\n";
            }
            {
                while ((GetAsyncKeyState(VK_LBUTTON);