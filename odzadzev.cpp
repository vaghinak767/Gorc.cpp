#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[n];
    }
    int j = 0, i = 0;
    int co = 1;
    while (j < n)
    {
        std::cin >> arr[i][j];
        if (i == (n - 1) && j != 0)
        {
            ++j;
            --co;
        }
        else if (i == 0 && j && j != (n - 1))
        {
            ++j;
            --co;
        }
        if (co >= 2)
        {
            co = 1;
        }
        if (j % 2)
        {
            i -= co;
            if ((i == n - 1 || i == 0) && j)
                ++co;
        }
        else
        {
            i += co;
            if ((i == n - 1 || i == 0) && j)
                ++co;
        }
        
    }
    // for(int i = 0; i < n; ++i){
    //     for(int j = 0; j < n; ++j){
    //         if(i % 2){
    //             std::cin >> arr[n - 1 - j][i];
    //         }
    //         else
    //         std::cin >> arr[j][i];
    //     }
    // }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
