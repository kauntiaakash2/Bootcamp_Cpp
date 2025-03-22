#include<iostream>

// Return value
int calArea(int length, int width){
    int area = length*width;
    return area;// returns the calculated area
}

int global_variable = 100;// global variable declaration

// Scope Value
void myFunction(){
    int local_variable = 10;// local variable declaration
    std::cout<<"Local variable"<<local_variable<<std::endl;
    std::cout<<"Gloal variable"<<global_variable<<std::endl;
}

void printMessage(){
    std::cout<<"Hello, User!"<<std::endl;
}

int main(){
    int a=10,b=20;
    std::cout<<"area "<<calArea(a,b)<<std::endl;// calling the function and printing the result

    std::cout<<"Global variable"<<global_variable<<std::endl;// accessing the global variable
    std::cout<<"Local variable"<<std::endl;// accessing the local variable but will display an error

    printMessage();

    return 0;
}