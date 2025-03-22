#include <iostream>

int main(){
    // For loop
    int totalPushups = 0;
    for (int i = 0; i < 60; i++)
    {
        int pushUps;
        std::cout << "How many pushups you were able to do in 1 minute: ";
        std::cin>>pushUps;
        totalPushups += pushUps;
    }
    std::cout<<"Your total pushups in 1 minutes is: "<<totalPushups<<std::endl;

    // while loop
    int totalPushups = 0;
    int pushUps, set = 1;
    std::cout<<"The total no.of pushups you want to do: ";
    std::cin>>pushUps;
    while(pushUps>0){
        int setPushups;
        std::cout<<"How many pushups you did in set "<<set<<": ";
        std::cin>>setPushups;
        set++ ;
        totalPushups += setPushups;
        pushUps -= setPushups;
    }
    std::cout<<"Your TotalPushups: "<<totalPushups<<std::endl;
    if (totalPushups>pushUps)
    {
        std::cout<<"Excllent you crossed your target!!"<<std::endl;
    }
    else{
        std::cout<<"You completed your target!!"<<std::endl;
    }

    // do while loop
    int totalPushUps = 0;
    int pushUps;
    do
    {
        int setPushUps;
        std::cout << "How many push-ups can you do in one set? ";
        std::cin >> setPushUps;
        totalPushUps += setPushUps;
        std::cout << "Do you want to do more push-ups? (1 for yes, 0 for no) ";
        std::cin >> pushUps;
    } 
    while (pushUps != 0);
        std::cout << "Your total push-ups: " << totalPushUps << std::endl;


    return 0;
}