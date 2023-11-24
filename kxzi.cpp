#include <iostream>

void rek( int **arr, int n, int m)
{
    if(n == 0 && m == 0){
        return;
    }
    if(n == 0)
    {
        if(arr[n][m] == 1)
        {
            if(arr[n][m - 1] == 1)
            {
                arr[n][m] = 0;
                rek(arr, n , m - 1);
                return;
            }
            if(arr[n][m - 1] == 0)
            {
                rek(arr, n, m - 1);
                return;
            }
        }
        if(arr[n][m] == 0)
        {
            rek(arr, n, m - 1);
            return;
        }
    }
    if(m == 0)
    {
        if(arr[n][m] == 1)
        {
            if(arr[n - 1][m] == 1)
            {
                arr[n][m] = 0;
                rek(arr, n - 1, m);
                return;
            }
            if(arr[n - 1][m] == 0)
            {
                rek(arr, n - 1, m);
                return;
            }
        }
        if(arr[n][m] == 0)
        {
            rek(arr, n - 1, m);
            rek(arr, n, m - 1);
            return;
        }
    }
        if(arr[n][m] == 1)
        {
            if(arr[n - 1][m] == 1 && arr[n][m - 1] == 1)
            {
            int k = n;
               while(arr[k][m])
               {
                    arr[k][m] = 0;
                    if(k == 0)
                    break;
                    --k;
               } 
               rek(arr, n - 1, m);
               rek(arr, n, m - 1);
               return;
            }
            else if(arr[n - 1][m] == 1)
            {
                arr[n][m] = 0;
                rek(arr, n - 1, m);
                return;
            }
            else if(arr[n][m - 1] == 1)
            {
                arr[n][m] = 0;
                rek(arr, n, m - 1);
                return;
            }
            if(arr[n - 1][m] == 0 && arr[n][m - 1] == 0)
            {
                rek(arr, n - 1, m);
                rek(arr, n, m - 1);
                return;
            }
        }
        if(arr[n][m] == 0)
        {
            rek(arr, n - 1, m);
            rek(arr, n, m - 1);
            return;
        }
    
}
    int main()
    {
        int n = 0, m = 0;
        std::cin >> n >> m;
        int **arr = new int*[n];
        for(int i = 0; i < n; ++i)
        {
            arr[i] = new int[m];
        }
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                std::cin >> arr[i][j];
            }
        }
        rek(arr, n - 1, m - 1);
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                sum += arr[i][j];
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << sum;
        for(int i = 0; i < n; ++i)
        {
            delete[]arr[i];
        }
        delete[]arr;
    }
