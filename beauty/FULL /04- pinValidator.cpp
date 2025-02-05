#include <iostream>

int main()
{
    int usersPin = 1234, pin, errorCounter = 0;

    do {
        std::cout << "PIN: ";
        std::cin >> pin;
        if (pin != usersPin)
            errorCounter++;
    } while (errorCounter < 3 && pin != usersPin);
    if (errorCounter < 3)
        std::cout << "loading...\n";
    else
        std::cout << "Blocked...\n";
    
}