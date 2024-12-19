/*
- write a programm which calculates the factorial of the inputted number.
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    int i;
    int j;

    i = 1;
    j = 1;
    cout << "enter a number : ";
    cin >> number;
    if (number < 0)
    {
        cout << "there is no factorial for negative numbers\n";
        return 0;
    }
    if (number == 0)
    {
        cout << "0\n";
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
    cout << i << "\n";
}
