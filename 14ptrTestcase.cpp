#include<iostream>
int main(){
    int x = 5;
    int *p = &x;
    std::cout<<x<<std::endl;
    std::cout<<p<<std::endl;
    int value_of_x = x;
    std::cout<<value_of_x<<std::endl;
    int *add_of_x = &x;
    std::cout<<add_of_x<<std::endl;
    int *ptr_value = p;
    std::cout<<ptr_value<<std::endl;
    int value_at_address = *p;
    std::cout<<value_at_address<<std::endl;
    return 0;
}