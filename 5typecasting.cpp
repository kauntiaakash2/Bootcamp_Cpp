#include<iostream>
int main(){
    // Implicit typecasting
    int a = 5;
    double b = 3.5;
    double c = a + b;
    std::cout<<c;

    // Explicit typecasting
    int c = (int)b;
    double d = (double)a;
    std::cout<<d;
    return 0;
}