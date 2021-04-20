#include <string>
#include <iostream>

#include "linenoise.hpp"

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
    const auto history_path = "history.txt";
    linenoise::LoadHistory(history_path);
    while (true) {
        std::string line {};
        auto quit = linenoise::Readline(prompt.c_str(), line);
        if (quit) {
            break;
        }

        std::cout << rep(line) << '\n';
        linenoise::AddHistory(line.c_str());
        linenoise::SaveHistory(history_path);
    }

    return 0;
}
