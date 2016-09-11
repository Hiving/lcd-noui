#include "HydroLiquidCrystal.h"
#include "MatrixLcd.h"
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
//<<constructor>> setup the LED, make pin 13 an OUTPUT
HydroLiquidCrystal::HydroLiquidCrystal(){
    // set up the LCD's number of columns and rows:
	lcd.begin(20, 4);
	_lcdMenuMain.prepareDisplay();
	_lcdMenuMain.printMatrix(lcd);
}

void HydroLiquidCrystal::moveDownMenu(){
	if (selectedMenu == 1) {
		_lcdMenuMain.moveDownMenu();
		_lcdMenuMain.printMatrix(lcd);
	}
}

void HydroLiquidCrystal::moveUpMenu(){
	if (selectedMenu == 1) {
		_lcdMenuMain.moveUpMenu();
		_lcdMenuMain.printMatrix(lcd);
	}
}
