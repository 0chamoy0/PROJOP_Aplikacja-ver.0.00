#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int wybor;
    std::ifstream mathematics("math.txt");
    std::cout << "Witaj uzytkowniku! \nWybierz jedna z podanych opcji\n";
    std::cout << "1. Wzory uzywane przy funkcji kwadratowej"<<'\n';
    std::cout << "2. Tkanki: nablonkowa, miesniowa i nerwowa" << '\n';
    std::cout << "Twoj wybor: ";
    std::cin >> wybor;
    std::cout << '\n';
    std::string myline;
    switch (wybor)
    {
    case 1:
        if (mathematics.is_open()) {
            while (getline(mathematics, myline)) {
                std::cout << myline << '\n';
            }
        }
        else {
            std::cout << "Couldn't open file\n";
        }
        break;
    default:
        std::cout << "cos";
        break;
    }
}

