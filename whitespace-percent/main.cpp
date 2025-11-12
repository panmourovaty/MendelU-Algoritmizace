#include <iostream>

int main() {
    char vstup;
    int celkem_znaku = 0;
    int bile_znaky = 0;

    while (std::cin >> vstup) {
        celkem_znaku++;
        if (vstup == ' ') bile_znaky++;
        else if (vstup == '\t') bile_znaky++;
        else if (vstup == '\n') bile_znaky++;
    }

    std::cout << bile_znaky * 100.0 / celkem_znaku;
}