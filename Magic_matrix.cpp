#include <iostream>

bool magic(int **arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[0][i];
    }
    int sum_of_diagram = 0, sum_of_anti = 0;
    for (int i = 0; i < n; ++i)
    {
        int sum_of_rows = 0, sum_of_columns = 0;
        for (int j = 0; j < n; ++j)
        {
            sum_of_rows += arr[i][j];
            sum_of_columns += arr[j][i];
        }
        sum_of_diagram += arr[i][i];
        if (sum_of_rows != sum || sum_of_columns != sum)
            return false;
        sum_of_anti += arr[n - 1 - i][n - 1 - i];
    }
    if (sum_of_diagram != sum || sum_of_anti != sum)
        return false;
    return true;
}

int main()
{
    int n = 0;
    std::cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[n];
    }
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
