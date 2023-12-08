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
