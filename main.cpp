// COMSC-210 | Lab 14 | Christine Susic

#include <iostream>
#include <iomanip>
using namespace std;

const int W1 = 8, W2 = 5;

class Color {
private: 
    int red, green, blue;
public:
    //setter and getter functions
    int getRed() const      {return red;}      
    void setRed(int r)      {red = r;}   
    int getGreen() const    {return green;}      
    void setGreen(int g)    {green = g;}  
    int getBlue() const     {return blue;}  
    void setBlue(int b)     {blue = b;}  
    //print function
    void print() {
        cout << left;
        cout << setw(W1) << "Red: " << setw(W2) << red << endl;
        cout << setw(W1) << "Green: " << setw(W2) << green << endl;
        cout <<  setw(W1) << "Blue: " << setw(W2) << blue << endl;
        cout << endl;
    }
};

int main() {
    //Color1 object
    Color color1;
    color1.setRed(100);
    color1.setGreen(200);
    color1.setBlue(135);
    color1.print();
    //Color2 object
    Color color2;
    color2.setRed(215);
    color2.setGreen(123);
    color2.setBlue(15);
    color2.print();
    //Color3 object
    Color color3;
    color3.setRed(22);
    color3.setGreen(123);
    color3.setBlue(56);
    color3.print();
    
    return 0;
}