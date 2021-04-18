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

std::string rep(std::string input) {
    std::string read = READ(input);
    std::string eval = EVAL(read);
    return PRINT(eval);
}

int main() {
    std::string prompt = "user> ";
    std::string line {};
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, line);
        std::cout << rep(line) << '\n';
    }
    return 0;
}
