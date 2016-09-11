#ifndef MatrixLcd_H
#define MatrixLcd_H

#include <LiquidCrystal.h>
#include <MatrixMath.h>

class MatrixLcd {
public:
    MatrixLcd();
    void printMatrix(LiquidCrystal _lcd);
    void add(int _cursorPosX, int _cursorPosY, char * str);
    void showCursor(int line);
    void moveCursor(int oldLine, int newLine);
private:
    char _matrix[4][20];
};

#endif