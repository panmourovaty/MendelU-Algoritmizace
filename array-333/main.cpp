#include <iostream>
using namespace std;

int main()
{
    typedef unsigned int TypIndex;
    typedef long long int TypDat;
    const TypDat KH = -333;
    TypDat Cislo;
    const TypIndex Velikost = 1000;
    TypDat Pole[Velikost];
    TypIndex kam = 0;
    TypIndex pocet = 0;

    cin >> Cislo;
    while (Cislo != KH)
    {
        Pole[kam] = Cislo; // array insertion
        kam++;
        cin >> Cislo;
    }

    for (TypIndex i = 0; i < kam; i++)
    {
        if (Pole[i]<Pole[kam - 1]) pocet++;
    }

    cout << pocet << endl;
    return 0;
}