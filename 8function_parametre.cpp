#include<iostream>

// void make_pizza(std::string toppings, std::string size);

void makePizza(std::string toppings, std::string size){
    std::cout<<"You have ordered a "<<size<<" pizza with "<<toppings<<" toppings on it!!"<<std::endl;
}

int main(){
    makePizza("Panner", "Large");
    makePizza("Vegies", "Medium");
    return 0;
}
