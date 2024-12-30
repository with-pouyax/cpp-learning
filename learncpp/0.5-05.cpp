/*
- write a programm which prints all the even numbers in range of 1 to 50 by using do-while loop.
*/

#include <iostream>

int main()
{
    int i;

    i = 0;
    do
    {
        if (i % 2 == 0)
            std::cout << i << " ";
        i++;
    }
    while (i <= 50);
    return 0;
    
}