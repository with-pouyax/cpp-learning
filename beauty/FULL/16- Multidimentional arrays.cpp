#include <iostream>

int main ()
{
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    int **table = new int*[rows];
    // we need * after int because each block of memory we are
    // allocating is not an int, but a pointer to an int.

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }

    table[0][2] = 88;

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i]; // delete each row
    }

    delete[] table; // delete the array of rows

    table = NULL; // set the pointer to NULL
}