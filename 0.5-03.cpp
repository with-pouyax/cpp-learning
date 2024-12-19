/*
- write a programm to print numbers in the specified range by using while loop.
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    
    j = 0;
    cout << "enter a number : ";
    cin >> i;
    while (j <= i)
    {
        cout <<  j << "\n";
        j++;
    }
    return (0);
}