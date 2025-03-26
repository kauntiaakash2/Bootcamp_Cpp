#include<iostream>
int main(){
    // Pointer is a variable that stores the memory address of another variable.
    int x = 5;
    int *ptr = &x;
    std::cout<<*ptr<<std::endl;
    return 0;
}