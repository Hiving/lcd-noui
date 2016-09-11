#ifndef LcdMenu_H
#define LcdMenu_H

#include "MatrixLcd.h"

class LcdMenu {
public:
    LcdMenu();
    void printMatrix(LiquidCrystal _lcd);
    void printNextLine(char * str, bool center);
    void prepareDisplay();
    void moveDownMenu();
private:
    MatrixLcd _matrixLcd;
    int cursorSelector = 0;
	bool cursorSelectorActive = false;

	int maxCursorX = 20;
	int maxCursorY = 4;

	int cursorPosX = 0;
	int cursorPosY = 0;

	// Mode = 1
	// Manual = 2
    int selectedMenu = 1;
};

#endif