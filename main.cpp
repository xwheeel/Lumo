#include "lumo.hpp"
#include <iostream>

int main() {
    vector<string> tokens = lumo::tokenize("let x = 10");

    for (string token : tokens) {
        std::cout << token << std::endl;
    }

    return 0;
}