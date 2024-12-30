/*
- write a programm which calculates the factorial of the inputted number.
*/

#include <iostream>

int main()
{
    int number;
    int i;
    int j;

    i = 1;
    j = 1;
    std::cout << "enter a number : ";
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "there is no factorial for negative numbers\n";
        return 0;
    }
    if (number == 0)
    {
        std::cout << "0\n";
        return 0;
    }
    else
    {
        while (j + 1 <= number)
        {
            i = i * (j + 1);
            j++;
            
        }
    }
    std::cout << i << "\n";
}
