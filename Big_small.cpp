#include <iostream>

void Big_small(int **arr, int n, int m)
{
    int index = 0;
    int count = 0;
    int Big_small = arr[0][0];
    int co = 0;
    for (int i = 0; i < n; ++i)
    {
        if(co)
            break;
        int max = arr[i][0];
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                index = j;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (arr[i][index] <= max)
            {
                ++count;
            }
        }
        if (count == 1)
        {
            ++co;
            std::cout << "The element you want is: " << max;
            break;
        }
        count = 0;
    }
    if(co == 0)
    {
        std::cout << "There is no element which you want";
    }
}

int main()
{
    int n = 0, m = 0;
    std::cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> arr[i][j];
        }
    }
    Big_small(arr, n, m);
    std::cout << std::endl;
    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
