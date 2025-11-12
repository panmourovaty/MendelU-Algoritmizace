#include <iostream>

int main() {
    // define variables
    float a; // will be defined by first value
    float b = -400.0; // initialize to very low temperature so it doesn't count first comparison
    int pocet = 0; // counter for declining temperatures
    bool step = true;

    while (std::cin >> a) { // read while there are values inputed
        if (!step) {
            if (a < b) {
                pocet++; // increment counter if current temperature is lower than previous
            }
        } else {
            step = false;
        }
        b = a;
    }

    std::cout << pocet << std::endl; // output the count of declining temperatures
    return 0;
}