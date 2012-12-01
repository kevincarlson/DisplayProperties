#ifndef DISPLAY_HH
#define DISPLAY_HH

class DisplayPanel {
public:
    DisplayPanel();

    double getPixelsPerInch();
    double getHorizontalSize();
    double getVerticalSize();

    void setHorizontalResolution(int val);
    void setVerticalResolution(int val);
    void setDiagonalSize(double val);
private:
    int horizontalResolution;
    int verticalResolution;
    double diagonalSize;
};

#endif // DISPLAY_HH
