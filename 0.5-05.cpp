/*
- write a programm which prints all the even numbers in range of 1 to 50 by using do-while loop.
*/

#include <iostream>
using namespace std;

int main()
{
    int i;

    i = 0;
    do
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    }
    while (i <= 50);
    return 0;
    
}