#include<iostream>
int main(){
    int *p = new int;
    *p = 5;
    std::cout<<*p<<std::endl;
    delete p;
    return 0;
}