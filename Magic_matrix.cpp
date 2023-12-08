// #include "class2.h"

// void BankAccount::setter()
// {
//     std::cout << "Enter the number of account: ";
//     std::cin >> account_number;
//     std::cout << "Enter the name of account holder: ";
//     std::cin >> account_holder;
// }

// void BankAccount::display()
// {
//     std::cout << "The number of account: ";
//     std::cout << account_number << std::endl;
//     std::cout << "The name of account holder: ";
//     std::cout << account_holder << std::endl;
//     std::cout << "The balance of account: ";
//     std::cout << balance << std::endl;
// }

// void BankAccount::deposit(double amount)
// {
//     balance += amount;
// }

// void BankAccount::withdraw(double amount)
// {
//     if (amount > balance)
//     {
//         throw std::invalid_argument(" ");
//     }
//     balance -= amount;
// }

// int main()
// {
//     BankAccount info;
//     info.setter();
//     std::cout << "For deposition press 1 " << std::endl;
//     std::cout << "For withdrawing press 2 " << std::endl;
//     std::cout << "To exit press q" << std::endl;
//     short key = 0;
//     double amount = 0.0;
//     for (; std::cin >> key;)
//     {
//         if (key == 1)
//         {
//             std::cout << "Enter the amount of money that you want to deposit: ";
//             std::cin >> amount;
//             info.deposit(amount);
//         }
//         else if (key == 2)
//         {
//             std::cout << "Enter the amount of money that you want to whitdraw: ";
//             std::cin >> amount;
//             info.withdraw(amount);
//         }
//     }
//     info.display();
// }

#include <iostream>

int the_biggest(int**, int, int);
void Big_small(int**, int, int);

int main()
{
    int n = 0, m = 0;
    std::cout << "Enter the size of rows: ";
    std::cin >> n;
    std::cout << "Enter the size of columns: ";
    std::cin >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[m];
    }
    std::cout << "Enter the elements of matrix" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> arr[i][j];
        }
    }
    Big_small(arr, n, m);
    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

void Big_small(int **arr, int n, int m)
{
    int mid = 0;
    for (int i = 0; i < n; ++i)
    {
        int index = the_biggest(arr, i, m);
        for (int k = 0; k < n; ++k)
        {
            if (arr[k][index] < arr[i][index])
            {
                break;
            }
            ++mid;
            if (mid == n)
            {
                std::cout << "The elemnt you want is arr[" << i << "][" << index << "] = " << arr[i][index] << std::endl;
                return;
            }
        }
    }
    std::cout << "There is no element which you want" << std::endl;
}

int the_biggest(int **arr, int i, int m)
{
    int target = arr[i][0];
    int index = 0;
    for (int j = 0; j < m; ++j)
    {
        if (arr[i][j] > target)
        {
            target = arr[i][j];
            index = j;
        }
    }
    return index;
}
