#include <iostream>
using namespace std;

int main()
{
    // Define type aliases for clarity
    typedef unsigned int TypIndex; // Alias for array indices/counts (must be non-negative)
    typedef long long int TypDat;  // Alias for the data type of the numbers being processed (long long int)

    // Define a constant sentinel value (KH = Konec Hledani/Konec Hlavniho cyklu - End of Search/Main loop)
    const TypDat KH = -333;

    TypDat Cislo; // Variable to temporarily hold the number read from input

    // Define the maximum size of the array
    const TypIndex Velikost = 1000;

    TypDat Pole[Velikost]; // Array (Pole) to store the input numbers, max size 1000

    TypIndex kam = 0;   // Index (kam = where) to track the next available position in the array (the number of elements read)
    TypIndex pocet = 0; // Counter (pocet) to store the final result (count of elements smaller than the last one)

    // Read the first number from the input
    cin >> Cislo;

    // Loop continues as long as the read number is NOT the sentinel value KH
    while (Cislo != KH)
    {
        // Store the read number into the array at the current position 'kam'
        Pole[kam] = Cislo;

        // Move the index to the next position (increment the count of stored elements)
        kam++;

        // Read the next number
        cin >> Cislo;

        // NOTE: The code implicitly assumes 'kam' will not exceed 'Velikost'.
    }

    // Loop through all the elements that were actually stored in the array (from index 0 up to, but not including, 'kam')
    for (TypIndex i = 0; i < kam; i++)
    {
        // Compare the current element Pole[i] with the LAST element stored in the array.
        // The last element is at index 'kam - 1'.
        if (Pole[i] < Pole[kam - 1])
        {
            // If the current element is smaller than the last element, increment the counter
            pocet++;
        }
    }

    // Output the final count (pocet) of elements smaller than the last element
    cout << pocet << endl;

    return 0;
}