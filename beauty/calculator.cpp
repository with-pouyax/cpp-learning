#include <iostream>

int main ()
{
    float num1, num2;
    char operation;

    std::cout << "**pouya's calculator**"<< "\n";
    std::cin >> num1 >> operation >> num2;

    switch (operation)
    {
        case '-': std::cout << num1 << operation << num2 << "=" << num1 - num2 << "\n"; break;
        case '+': std::cout << num1 << operation << num2 << "=" << num1 + num2 << "\n"; break;
        case '*': std::cout << num1 << operation << num2 << "=" << num1 * num2 << "\n"; break;
        case '/': std::cout << num1 << operation << num2 << "=" << num1 / num2 << "\n"; break;
        case '%':
                bool isNum1Int, isNum2Int;
                ((int)num1 - num1 == 0)?isNum1Int = 1:isNum1Int = 0;
                ((int)num2 - num2 == 0)?isNum2Int = 1:isNum2Int = 0;

                (isNum1Int && isNum2Int)?
                std::cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2:
                std::cout << "Not valid";
                break;
        default:std::cout<<"Not valid operation" << "\n";
    } 
}