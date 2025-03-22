#include<iostream>
int main(){
    int rideSpeed = 65;
    int speedLimit = 50;

    // if else conditional statements

    if(rideSpeed <= speedLimit){
        std::cout<<"We can go on a ride!!"<<std::endl;
    }
    else{
        std::cout<<"The ride is too slow!!"<<std::endl;
    }

    // switch statements

    switch (rideSpeed)
    {
    case 50:
        std::cout<<"The ride speed is perfect!!"<<std::endl;
        break;
    case 55:
        std::cout<<"The ride speed is medium!!"<<std::endl;
        break;
    case 65:
        std::cout<<"The ride is tooo fast!!"<<std::endl;
        break;
    default:
        std::cout<<"Unknown speed!!"<<std::endl;
        break;
    }

    return 0;

}