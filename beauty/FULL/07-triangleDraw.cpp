#include <iostream>
#include <iomanip>

int main ()
{
    int hight;
    char symbol;

    std::cout << "entr hight: " ;
    std::cin >> hight;

    std::cout << "Enter symbol: ";
    std::cin >> symbol;

    for (int i = 0; i < hight; i++)
    {
        for (int j = 0; j < i + 1 && j <= hight; j++)
            std::cout << std::setw(2) << symbol;
        std::cout << "\n";
    }
}