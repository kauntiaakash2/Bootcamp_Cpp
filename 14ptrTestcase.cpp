#include<iostream>
int main(){
    int x = 5;
    int *p = &x;
    std::cout<<x<<std::endl;
    std::cout<<p<<std::endl;
    //
    int value_of_x = x;
    std::cout<<value_of_x<<std::endl;
    //
    int *add_of_x = &x;
    std::cout<<add_of_x<<std::endl;
    //
    int *ptr_value = p;
    std::cout<<ptr_value<<std::endl;
    // dereferencing a pointer
    int value_at_address = *p;
    std::cout<<value_at_address<<std::endl;

    // arithmetic pointers
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr+2;// This points to the 3rd element of an array
    std::cout << *p <<std::endl;

    //Pointer Casting
    float f = 3.14;
    std::cout<<f<<std::endl;
    int *p = (int*)&f;// This casts the address of f to an int pointer
    std::cout<<*p<<std::endl;// This dereferences the int pointer, which may not give the expected result
    return 0;
}