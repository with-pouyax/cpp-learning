#include <iostream>
#include <cstdlib>


void showMenue()
{
    std::cout << "********MENU********" << std::endl;
    std::cout << "1. Check balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "********************" << std::endl;
}

int main ()
{
    //check balance, deposit, withdraw, show menu

    int     option;
    double  balance = 500;
    do{
        showMenue();
        std::cout << "please enter option : ";
        std::cin >> option;
        switch (option)
        {
            case 1: std::cout << "Balance is: " << balance << " $" << std::endl; break;
            case 2: std::cout << "Deposit amount: ";
                double deposiAmount;
                std::cin >> deposiAmount;
                balance += deposiAmount;
            break;
            case 3: std::cout << "Withdraw amount: ";
                double withdrawAmount;
                std::cin >> withdrawAmount;
                if (withdrawAmount <= balance)
                    balance -= withdrawAmount;
                else
                    std::cout << "insufficient balance";
                break;
        }
    }
    while (option != 4);
}