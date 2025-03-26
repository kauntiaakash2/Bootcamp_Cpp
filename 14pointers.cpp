#include<iostream>
int main(){
    // Pointer is a variable that stores the memory address of another variable.
    // Some usecases of pointer in real world problems
    // Pointers are essential in C++ because they allow us to manipulate and access memory directly. With pointers, we can create complex data structures such as linked lists, trees, and graphs, and we can allocate and deallocate memory dynamically. Pointers also provide a way to pass arguments to functions by reference, which can save memory and improve performance.
    int x = 5;
    int *ptr = &x;
    std::cout<<*ptr<<std::endl;
    return 0;
}