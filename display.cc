#include <cmath>
#include "display.hh"

DisplayPanel::DisplayPanel() {
    horizontalResolution = 0;
    verticalResolution = 0;
    diagonalSize = 0;
}

double DisplayPanel::getPixelsPerInch() {
    double ppi = 0;

    if (diagonalSize > 0) {
        ppi = sqrt(pow(horizontalResolution, 2) + pow(verticalResolution, 2)) / diagonalSize;
    }

    return ppi;
}

double DisplayPanel::getHorizontalSize() {
    return horizontalResolution / getPixelsPerInch();
}

double DisplayPanel::getVerticalSize() {
    return verticalResolution / getPixelsPerInch();
}

void DisplayPanel::setHorizontalResolution(int val) {
    if (val > 0) {
        horizontalResolution = val;
    }
}

void DisplayPanel::setVerticalResolution(int val) {
    if (val > 0) {
        verticalResolution = val;
    }
}

void DisplayPanel::setDiagonalSize(double val) {
    if (val > 0) {
        diagonalSize = val;
    }
}
