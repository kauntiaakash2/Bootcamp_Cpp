#include <iostream>
#include <iomanip>  // For setprecision
#include <sstream>  // For stringstream
#include <string>   // For string

using namespace std;

int main()
{
    string item1 = "Hamburger";
    double price1 = 9.99;
    string item2 = "Pizza";
    double price2 = 11.99;

    stringstream menu;

    menu << item1 << " - $" << fixed << setprecision(2) << price1 << endl;
    menu << item2 << " - $" << fixed << setprecision(2) << price2 << endl;

    cout << menu.str();

    // Using substring problems
    string str = "Hello, World!";
    cout << str.substr(7, 5);  // Output: World
    return 0;
}