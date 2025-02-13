// sum all the numbers between  number M and N

#include <iostream>

int recursiveSum(int m, int n)
{
    if (m == n)
        return m;
    return m + recursiveSum(m + 1, n);
}


int main()
{
    int m = 2, n = 4;

   /*  int sum = 0;
    for(int i = m; i <= n; i++)
    {
        sum += i;
    }
    std::cout << "Sum is: " << sum << std::endl; */

    std::cout << "Sum is: " << recursiveSum(m, n) << std::endl;
}