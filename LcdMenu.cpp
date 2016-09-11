#include "LcdMenu.h"
#include "MatrixLcd.h"
#include <LiquidCrystal.h>

//<<constructor>> setup the LED, make pin 13 an OUTPUT
LcdMenu::LcdMenu() { }

void LcdMenu::prepareDisplay() {
	printNextLine("Main Menu", true);
  	printNextLine("Mode", false);
  	printNextLine("Manual", false);
  	_matrixLcd.showCursor(selectedMenu);
}

void LcdMenu::printMatrix(LiquidCrystal _lcd) {
	_matrixLcd.printMatrix(_lcd);
}

// serve to print in the next line
void LcdMenu::printNextLine(char * str, bool center) {
	int _cursorPosX = cursorPosX;
	int _cursorPosY = cursorPosY;

	if (center) {
		_cursorPosX += (maxCursorX-strlen(str))/2;
	}

	_matrixLcd.add(_cursorPosX + 1, _cursorPosY, str);
	cursorPosY ++;
}

void LcdMenu::moveDownMenu(){
	if (selectedMenu == 1) {
		/***/
	}
}