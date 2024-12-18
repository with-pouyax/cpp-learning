/*
- write a programm which prints a right triangle using (*) for the specified range of rows.
*/

#include<iostream>
using namespace std;

int main ()
{
    int i;
    int j;
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i < rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}