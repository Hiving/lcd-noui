#include "MatrixLcd.h"
#include <LiquidCrystal.h>
 
//<<constructor>> setup the LED, make pin 13 an OUTPUT
MatrixLcd::MatrixLcd(){ 
	for (int y = 0; y < 4; ++y) {
		for (int x = 0; x < 20; ++x) {
			_matrix[y][x] = ' ';
		}
	}
}

void MatrixLcd::showCursor(int line) {
	_matrix[line][0] = '>';	
}

void MatrixLcd::moveCursor(int oldLine, int newLine) {
	_matrix[oldLine][0] = ' ';	
	showCursor(newLine);
}

void MatrixLcd::printMatrix(LiquidCrystal _lcd) {
	for (int y = 0; y < 4; ++y) {
		for (int x = 0; x < 20; ++x) {
			_lcd.setCursor(x, y);
			_lcd.write(_matrix[y][x]);
		}
	}
}

void MatrixLcd::add(int _cursorPosX, int _cursorPosY, char * str) {
	for (int i = 0; i < strlen(str); ++i) {
		_matrix[_cursorPosY][_cursorPosX + i] = str[i];	
	}
}