#include <string>
#include <iostream>

std::string READ(std::string input) {
    return input;
}

std::string EVAL(std::string input) {
    return input;
}

std::string PRINT(std::string input) {
    return input;
}

void rep(std::string input) {
    std::string str = READ(input);
    EVAL(str);
}

int main() {
    std::string prompt = "user> \n";
    while (true) {
        std::cout << prompt;
    }
    return 0;
}