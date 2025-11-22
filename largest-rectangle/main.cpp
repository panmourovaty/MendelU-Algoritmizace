#include <iostream>
using namespace std;

int main()
{
    // Define a structure (TypObdelnik - RectangleType) to hold rectangle data
    struct TypObdelnik
    {
        float stranaA = 0; // Side A length
        float stranaB = 0; // Side B length
        float Obsah = 0;   // Area (Calculated as stranaA * stranaB)
    };

    // Declare variables to store the three largest rectangles found, and the current one
    TypObdelnik max1{}, max2{}, max3{}, C{}; // max1 is the largest, max2 is the second largest, max3 is the third largest, C is the current rectangle being processed


    // Read pairs of floats (stranaA and stranaB) from standard input until EOF or invalid input
    while (cin >> C.stranaA >> C.stranaB)
    {
        // Calculate the area of the current rectangle C
        C.Obsah = C.stranaA * C.stranaB;

        // Check if the current rectangle C has an area larger than the current largest (max1)
        if (C.Obsah > max1.Obsah)
        {
            // Shift the current top three down: max2 becomes max3, max1 becomes max2
            max3 = max2;
            max2 = max1;
            // C becomes the new largest (max1)
            max1 = C;
        }
        // Otherwise, check if C has an area larger than the current second largest (max2)
        else if (C.Obsah > max2.Obsah)
        {
            // Shift the current second and third largest down: max2 becomes max3
            max3 = max2;
            // C becomes the new second largest (max2)
            max2 = C;
        }
        // Otherwise, check if C has an area larger than the current third largest (max3)
        else if (C.Obsah > max3.Obsah)
        {
            // C becomes the new third largest (max3)
            max3 = C;
        }
    }

    // Output the side lengths of the largest rectangle (max1)
    cout << max1.stranaA << max1.stranaB << endl;
    // Output the side lengths of the second largest rectangle (max2)
    cout << max2.stranaA << max2.stranaB << endl;
    // Output the side lengths of the third largest rectangle (max3)
    cout << max3.stranaA << max3.stranaB << endl;

    return 0;
}