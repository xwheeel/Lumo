#include "lumo.hpp"
#include <iostream>

int main() {
    vector<string> tokens = lumo::tokenize("let x = 10");

    for (size_t index; index < tokens.size(); ++index) {
        std::cout << tokens[index] << std::endl;
    }

    return 0;
}