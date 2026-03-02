// COMSC-210 | Lab 14 | Christine Susic

#include <iostream>
#include <iomanip>
using namespace std;

const int W1 = 10;

class Color {
private: 
    int red, green, blue;
public:
    int getRed() const      {return red;}      
    void setRed();          
    int getGreen() const    {return green;}      
    void setGreen();        
    int getBlue() const     {return blue;}  
    void setBlue();          
    //print
    void print() {
        cout << setw(W1) << "Red:" << red << endl;
        cout << setw(W1) << "Green:" << green << endl;
        cout << setw(W1) << "Blue:" << blue << endl;
    }
};

int main() {
    //Color1
    Color color1;
    color1.setRed(100);
    color1.setGreen(200);
    color1.setBlue(135);
    color1.print();
    //Color2
    Color color2;
    color2.setRed(215);
    color2.setGreen(123);
    color2.setBlue(15);
    color2.print();
    //Color3
    Color color3;
    color3.setRed(22);
    color3.setGreen(123);
    color3.setBlue(56);
    color3.print();
    
    return 0;
}