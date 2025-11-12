#include <iostream>

int main() {
    char vstup;
    int celkem_znaku = 0;
    int bile_znaky = 0;

    while (std::cin.get(vstup)) { // read while there are characters inputed, can't use >> operator here because it skips whitespace
        celkem_znaku++;
        if (vstup == ' ' || vstup == '\t' || vstup == '\n') { // specify characters considered as whitespace
            bile_znaky++;
        }
    }

    if (celkem_znaku > 0) {
        std::cout << bile_znaky * 100.0 / celkem_znaku << std::endl; // calculate and output the percentage of whitespace characters
    }

    return 0;
}