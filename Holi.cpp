#include <iostream>
#include <vector>
#include <string>

// ANSI escape color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

struct ColorMessage {
    std::string color;
    std::string message;
};

int main() {
    std::vector<ColorMessage> holiMessages = {
        {RED,     "{ printf(\"Happy Holi! Spread Love and Passion!\"); }"},
        {GREEN,   "{ std::cout << \"Prosperity and New Beginnings!\"; }"},
        {YELLOW,  "{ echo \"Happiness and Energy to You!\"; }"},
        {BLUE,    "{ System.out.println(\"Calmness and Trust!\"); }"},
        {MAGENTA, "{ console.log(\"Creativity and Spirit!\"); }"},
        {CYAN,    "{ print(\"Harmony and Freshness!\"); }"},
        {WHITE,   "{ Console.WriteLine(\"Peace and Purity!\"); }"}
    };
    
    std::cout << "\n🎨 Happy Holi in Programmer Language! 🎨\n\n";
    
    for (const auto& msg : holiMessages) {
        std::cout << msg.color << msg.message << RESET << "\n";
    }
    
    std::cout << "\n🎊 Enjoy the festival of colors! Keep coding! 🎊\n";
    
    return 0;
}