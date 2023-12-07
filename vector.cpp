#include <iostream>

void mulvector(double arr[], int n, int k)
{
    for(int i = 0; i < n; ++i)
    {
        arr[i] *= k;
    }
}

int main()
{
    double arr[50] = {};
    int n = 0, k = 0;
    std::cin >> n >> k;
    for(int i = 0; i < n; ++i)
    {
    std::cin >> arr[i];
    }
    mulvector(arr, n, k);
    for(int i = 0; i < n; ++i)
    {
    std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
