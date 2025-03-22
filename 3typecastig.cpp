#include<iostream>
int main(){
    int a = 10;
    float b = (float)a;
    std::cout<<b<<std::endl;

    int c = 5;
    float d = (float)c/2;
    std::cout<<d<<std::endl;

    char grade = 'A';
    int score = (int)grade;// we are switching the datatype of the assignede variable
    std::cout<<score<<std::endl;

    return 0;
}