#include <iostream>
#include <cstdlib>

int main()
{
    int hotUserNum, guestUserNum;

    std::cout << "please enter a number: " << std::endl;
    std::cin >> hotUserNum;

    system("clear");

    std::cout << "please enter your guess: " << std::endl;
    std::cin >> guestUserNum;

    /* if (hotUserNum == guestUserNum)
        std::cout << "correct";
    else
        std::cout << "failed"; */   
    (hotUserNum == guestUserNum)? std::cout << "correct"<< std::endl: std::cout << "failed" << std::endl;
}