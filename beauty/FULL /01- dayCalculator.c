#include <iostream>

// leap year formular -> (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)

int main ()
{
    int year, month;

    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "month: ";
    std::cin >>month;

    switch (month)
    {
        case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)?
            std::cout<<"29 days month. ": std::cout << "28 days month." << "\n"; break;
        case 4:
        case 6:
        case 9:
        case 11: std::cout<<"30 days month. " << "\n"; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: std::cout << "31 days month." << "\n"; break;
        default: std::cout << "Not valid!" << "\n";
    }
}