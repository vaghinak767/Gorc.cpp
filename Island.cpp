#include <iostream>
#include <random>

void zero(int **, int, int, int, int);
int island(int **, int, int);

int main()
{
    int height = 0;
    int lenght = 0;
    std::cout << "Enter the size of row: ";
    std::cin >> height;
    std::cout << "Enter the size of column: ";
    std::cin >> lenght;
    int **arr = new int *[height];
    for (int i = 0; i < height; ++i)
    {
        arr[i] = new int[lenght];
    }
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < lenght; ++j)
        {
            arr[i][j] = rand() % 2;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl
              << "The count of ilends is: " << island(arr, height, lenght) << std::endl;
    for (int i = 0; i < height; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

void zero(int **arr, int n, int m, int height, int lenght)
{
    if (n < 0 || n >= height || m < 0 || m >= lenght)
    {
        return;
    }
    if (arr[n][m] == 0)
    {
        return;
    }
    arr[n][m] = 0;
    zero(arr, n - 1, m, height, lenght);
    zero(arr, n, m - 1, height, lenght);
    zero(arr, n + 1, m, height, lenght);
    zero(arr, n, m + 1, height, lenght);
}

int island(int **arr, int height, int lenght)
{
    int target = 0;
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < lenght; ++j)
        {
            if (arr[i][j] == 1)
            {
                ++target;
                zero(arr, i, j, height, lenght);
            }
        }
    }
    return target;
}
