#include<iostream>

void serve_food();

// Pass by value
void serve_food(int slicies){
    slicies -=  1;
    std::cout<<slicies;
}

// Pass by reference
void serve_food(int &slicies){
    slicies -=  1;
}

int main(){
    int a = 10;
    // serve_food(a);
    return 0;
}