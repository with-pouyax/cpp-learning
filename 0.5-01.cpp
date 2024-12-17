/*
- Write a program that prompts twice, for t, which is the number to print the table of, and n, which is the number of multiples to print.
*/

#include<iostream>
using namespace std;

int main()
{
    int t;
    int n;

    cout <<"print Table of: ";                        // print Table of: 
    cin >>t;                                          // here we are taking input from user and storing it in variable t
    cout <<"Upto: ";                                  // we are printing Upto:
    cin >>n;

    for (int i = 1; i <= n; i++)                      // we loop from 1 to n and each time we print :
    {
        cout <<t <<" x "<<i <<" = "<<t * i <<endl;    // we print the value of t, x, the value of i, =, and the value of t*i, <<endl is used to print a new line
    }
    return 0;
}