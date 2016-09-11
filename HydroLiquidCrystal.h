#ifndef HydroLiquidCrystal_H
#define HydroLiquidCrystal_H

#include <Arduino.h>
#include "MatrixLcd.h"
#include "LcdMenu.h"

class HydroLiquidCrystal {
public:
    HydroLiquidCrystal();
    void moveDownMenu();
private:
	LcdMenu _lcdMenuMain;

	// Main Menu = 1
    int selectedMenu = 1;
};

#endif