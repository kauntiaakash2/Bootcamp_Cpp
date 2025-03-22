#include <iomanip>
/*What is <iomanip>?
<iomanip> stands for I/O manipulators and provides functions to format output in C++.
Commonly Used <iomanip> Functions:
std::setw(n) → Sets the width of the output field.
std::setprecision(n) → Sets the decimal precision of floating-point numbers.
std::fixed → Displays floating-point numbers in fixed-point notation.
std::scientific → Displays floating-point numbers in scientific notation.
std::left / std::right → Aligns text to the left or right in the output field.
std::setfill(c) → Sets a custom fill character for padding.*/ 
#include<iostream>

// area of a square or rectangle
int area(int a, int b){
    return a*b;
}

// area of a circle
double area(double r){
    return 3.14*r*r;
}

int main(){
    std::cout<<area(10, 2)<<std::endl;
    std::cout<<std::setprecision(4)<<area(1.1)<<std::endl;
    return 0;
}