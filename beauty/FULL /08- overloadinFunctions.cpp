#include <iostream>

int sum(int a, int b)
{
	int result = a + b;
	return result;
}

double sum(double a, double b)
{
	return a + b;
}

float sum(float a, float b, float c)
{
	return a + b + c;
}

int main()
{
    std::cout << sum(1, 2) << "\n";
    std::cout << sum(1, 2) << "\n";
    std::cout << sum(1, 2) << "\n";
    std::cout << sum(1.1, 0.9);
}
