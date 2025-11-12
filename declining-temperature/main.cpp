#include <iostream>

int main() {
    float a;
    float b = -400.0;
    int pocet = 0;
    bool step = true;

    while (std::cin >> a) {
        if (!step) {
            if (a < b) {
                pocet++;
            }
        } else {
            step = false;
        }
        b = a;
    }

    std::cout << pocet << std::endl;
    return 0;
}