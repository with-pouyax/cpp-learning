/*
- write a programm to print numbers in the specified range by using while loop.
*/

#include <iostream>

int main()
{
    int i;
    int j;
    
    j = 0;
    std::cout << "enter a number : ";
    std::cin >> i;
    while (j <= i)
    {
        std::cout <<  j << "\n";
        j++;
    }
    return (0);
}