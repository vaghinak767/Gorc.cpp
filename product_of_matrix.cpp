#include <iostream>

void sum(int arr[][10], int arr1[][10], int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            arr[i][j] += arr1[i][j];
        }
    }
}

void mul(int end[][10], int arr[][10], int arr1[][10], int n, int m)
{
    for (int k = 0; k < n; ++k)
    {
        for (int l = 0; l < n; ++l)
        {
            for (int i = 0; i < m; ++i)
            {
                end[k][l] += (arr[k][i] * arr1[i][l]);
            }
        }
    }
}

int main()
{
    int arr[10][10] = {};
    int arr1[10][10] = {};
    int end[10][10] = {};
    int n = 0, m = 0, e = 0, r = 0;
    std::cout << "Enter the size of rows of first matrix: ";
    std::cin >> n;
    std::cout << "Enter the size of columns of first matrix: ";
    std::cin >> m;
    std::cout << "Enter the size of rows of second matrix: ";
    std::cin >> e;
    std::cout << "Enter the size of columns of second matrix: ";
    std::cin >> r;
    std::cout << "Enter the elements of first matrix" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> arr[i][j];
        }
    }
    std::cout << "Enter the elements of second matrix" << std::endl;
    for (int i = 0; i < e; ++i)
    {
        for (int j = 0; j < r; ++j)
        {
            std::cin >> arr1[i][j];
        }
    }
    if (e != m || n != r)
    {
        std::cout << "We can't do anything with these matrixes" << std::endl;
        return 0;
    }
    mul(end, arr, arr1, n, m);
    sum(arr, arr1, n, m);
    std::cout << "The product of matrixes is:" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << end[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "The summery of matrixes is" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
