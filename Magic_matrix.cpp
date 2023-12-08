#include <iostream>

bool magic(int **arr, int n);

int main()
{
    int n = 0;
    std::cout << "Enter the sizees of matrix: ";
    std::cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        for (int i = 0; i < n; ++i)
        {
            arr[i] = new int[n];
        }
    }
    std::cout << "Enter the lements of matrix" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> arr[i][j];
        }
    }
    std::cout << magic(arr, n) << std::endl;
    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

bool magic(int **arr, int n)
{
    int sum = 0, sum_of_diagram = 0, sum_of_anti = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[0][i];
    }
    for (int i = 0; i < n; ++i)
    {
        int sum_of_rows = 0, sum_of_columns = 0;
        for (int j = 0; j < n; ++j)
        {
            sum_of_rows += arr[i][j];
            sum_of_columns += arr[j][i];
        }
        if (sum != sum_of_columns || sum != sum_of_rows)
        {
            return false;
        }
        sum_of_diagram += arr[i][i];
        sum_of_anti += arr[n - 1 - i][n - 1 - i];
    }
    if (sum != sum_of_diagram || sum != sum_of_anti)
    {
        return false;
    }
    return true;
}
