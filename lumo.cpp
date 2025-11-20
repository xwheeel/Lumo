#include "lumo.hpp"

vector<string> lumo::tokenize(string source) {
    vector<string> tokens = {};
    size_t characterIndex = 0;

    while (characterIndex < source.size()) {
        tokens.emplace_back(source[characterIndex]);
    }

    return tokens;
}