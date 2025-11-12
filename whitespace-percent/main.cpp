#include <iostream>

int main() {
    char vstup;
    int celkem_znaku = 0;
    int bile_znaky = 0;

    while (std::cin.get(vstup)) {
        celkem_znaku++;
        if (vstup == ' ' || vstup == '\t' || vstup == '\n') {
            bile_znaky++;
        }
    }

    if (celkem_znaku > 0) {
        std::cout << bile_znaky * 100.0 / celkem_znaku;
    }

    return 0;
}