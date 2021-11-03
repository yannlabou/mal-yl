#include <string_view>
#include <iostream>

#include "linenoise.hpp"

std::string_view READ(std::string_view input) {
    return input;
}

std::string_view EVAL(std::string_view input) {
    return input;
}

std::string_view PRINT(std::string_view input) {
    return input;
}

std::string_view rep(std::string_view input) {
    std::string_view read = READ(input);
    std::string_view eval = EVAL(read);
    return PRINT(eval);
}

int main() {
    const char* prompt = "user> ";
    const auto history_path = "history.txt";
    linenoise::LoadHistory(history_path);
    while (true) {
        std::string line {};
        auto quit = linenoise::Readline(prompt, line);
        if (quit) {
            break;
        }

        std::cout << rep(line) << '\n';
        linenoise::AddHistory(line.c_str());
        linenoise::SaveHistory(history_path);
    }

    return 0;
}
