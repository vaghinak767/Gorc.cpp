#include <iostream>

void Big_small(int **arr, int n, int m)
{
    int index = 0;
    int count = 0;
    int end = 0;
    for (int i = 0; i < n; ++i)
    {
        int co = 0;
        if(end)
            break;
        int Big_Small = arr[i][0];
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] > Big_Small)
            {
                Big_Small = arr[i][j];
                index = j;
            }
                for(int k = index + 1; k < m; ++k)
                {
                    if(Big_Small == arr[i][k])
                    {
                        ++co;
                    }
                    if(co)
                    {
                        break;
                    }
                }
            
            if(co)
            {
                break;
            }
        }
        if(co)
            {
                continue;
            }
        for (int i = 0; i < n; ++i)
        {
            if (arr[i][index] <= Big_Small)
            {
                ++count;
            }
        }
        if (count == 1)
        {
            ++end;
            std::cout << "The element you want is: " << "arr[" << i <<"][" << index << "] = "<<  Big_Small;
            break;
        }
        count = 0;
    }
    if(end == 0)
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
