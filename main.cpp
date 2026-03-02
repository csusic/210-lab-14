// COMSC-210 | Lab 14 | Christine Susic

#include <iostream>
using namespace std;

const int W1 = 10;

class Color {
private: 
    int red, green, blue;
public:
    int getRed() const      {return red;}      
    void setRed()           {red = r;}
    int getGreen() const    {return green;}      
    void setGreen()         {green = g;}
    int getBlue() const     {return blue;}  
    void setBlue()          {blue = b;}
    //print
    void print() {
        cout << setw(W1) << "Red:" << red << endl;
        cout << setw(W1) << "Green:" << green << endl;
        cout << setw(W1) << "Blue:" << blue << endl;
    }
};

int main() {
    //Red
    
    //Green
    
    //Blue
    
    return 0;
}