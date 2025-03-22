#include<iostream>
int main(){
    // arithmetic operators
    int a = 5, b = 2;
    std::cout<<a+b<<std::endl;
    std::cout<<a-b<<std::endl;
    std::cout<<a*b<<std::endl;
    std::cout<<a/b<<std::endl;
    std::cout<<a%b<<std::endl;

    // relational operator
    std::cout<<(a==b)<<std::endl;
    std::cout<<(a!=b)<<std::endl;
    std::cout<<(a>b)<<std::endl;
    std::cout<<(a<b)<<std::endl;

    // logical operators
    bool isRaning = true, isCold = false;
    std::cout<<(isRaning&&isCold)<<std::endl;
    std::cout<<(isRaning||isCold)<<std::endl;
    std::cout<<(!isRaning)<<std::endl;

    // shorthand operators
    int a = 5;
    a+= 2;
    std::cout<<a<<std::endl;

    return 0;
}