/*
- write a programm which prints a right triangle using (*) for the specified range of rows.
*/

#include<iostream>

int main ()
{
    int i;
    int j;
    int rows;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    for (i = 1; i < rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}