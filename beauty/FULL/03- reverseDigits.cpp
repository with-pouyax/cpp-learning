// write a programm that when we give a number it reverse it, if it recieves 123, it will print 321

#include <iostream>

int main()
{
    int number;
    int temp;
    int digit;

    number = 0;

    std::cout << "Enter a number : ";
    std::cin >> number;
    if (number / 10 == 0)
        return(std::cout << std::to_string(number) << std::endl, 1);
    if (number < 0)
    {
        number *= -1;
        std::cout << "-";
    } 
    while (number > 0)
    {
        temp = number / 10;
        digit = number - (temp * 10);
        number = number - digit;
        std::cout << digit;
        number = temp;
    }
    std::cout << "\n";
}
