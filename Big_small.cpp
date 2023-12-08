#include <iostream>

void Big_small(int **arr, int n, int m)
{
    int mid = 0;
    int target = arr[0][0];
    int index = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] > target)
            {
                target = arr[i][j];
                index = j;
            }
        }
        for (int k = 0; k < n; ++k)
        {
            if (arr[k][index] < target)
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
        if(i == n - 1)
            break;
        target = arr[i + 1][0];
    }
    std::cout << "There is no element which you want" << std::endl;
}

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
