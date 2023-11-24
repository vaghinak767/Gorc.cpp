#include <iostream>

void rek( int **arr, int n, int m, int size, int size1)
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
                int  h = m - 1;
                while(arr[n][h]){
                   arr[n][h] = 0;
                   if(h == 0)
                       break;
                   --h;}
                rek(arr, n , m - 1, size, size1);
                return;
            }
            if(arr[n][m - 1] == 0)
            {
                rek(arr, n, m - 1, size, size1);
                return;
            }
        }
        if(arr[n][m] == 0)
        {
            rek(arr, n, m - 1, size, size1);
            return;
        }
    }
    if(m == 0)
    {
        if(arr[n][m] == 1)
        {   
            if(arr[n - 1][m] == 1)
            {
                int c = n - 1;
                while(arr[c][m]){
                   arr[c][m] = 0;
                   if(c == 0)
                       break;
                   --c;
                rek(arr, n - 1, m, size, size1);
                return;
            }
            if(arr[n - 1][m] == 0)
            {
                rek(arr, n - 1, m, size, size1);
                return;
            }
        }
        if(arr[n][m] == 0)
        {
            rek(arr, n - 1, m, size, size1);
            rek(arr, n, m - 1, size, size1);
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
                    int l = m; 
                    while(arr[k][l])
                    {
                        arr[k][l] = 0;
                        if(l == 0)
                        break;
                        --l; 
                    }
                    l = m;
                    while(arr[k][l])
                    {
                        arr[k][l] = 0;
                        if(l == size1)
                        break;
                        ++l; 
                    }
                    arr[k][m] = 0;
                    if(k == 0)
                    break;
                    --k;
               }
               arr[n][m] = 1;
               rek(arr, n - 1, m, size, size1);
               rek(arr, n, m - 1, size, size1);
               return;
            }
            else if(arr[n - 1][m] == 1)
            {
                arr[n][m] = 0;
                rek(arr, n - 1, m, size, size1);
                return;
            }
            else if(arr[n][m - 1] == 1)
            {
                arr[n][m] = 0;
                rek(arr, n, m - 1, size, size1);
                return;
            }
            if(arr[n - 1][m] == 0 && arr[n][m - 1] == 0)
            {
                rek(arr, n - 1, m, size, size1);
                rek(arr, n, m - 1, size, size1);
                return;
            }
        }
        if(arr[n][m] == 0)
        {
            rek(arr, n - 1, m, size, size1);
            rek(arr, n, m - 1, size, size1);
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
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                //sum += arr[i][j];
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        rek(arr, n - 1, m - 1, n, m);
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
