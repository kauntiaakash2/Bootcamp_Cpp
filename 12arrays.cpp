#include<iostream>
int main(){
    // std::cout<<"Arrays in C++"<<std::endl;
    // int table[3][3];
    // table[0][0] = 20;
    // table[0][1] = 30;
    // table[0][2] = 40;
    // table[1][0] = 20;
    // table[1][1] = 30;
    // table[1][2] = 40;
    // std::cout<<table[1][1]<<std::endl;
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int count = sizeof(myNumbers) / sizeof(myNumbers[0]);
    std::cout << count; // This will output 5
    return 0;
}