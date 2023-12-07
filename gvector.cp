#include <iostream>

void gvector(double arr1[], double arr2[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        arr1[i] += arr2[i];   
    }
}

int main()
{
    double arr1[50] = {};
    double arr2[50] = {};
    int n = 0;
    std::cin >> n;
    for(int i = 0; i < n; ++i)
    {
        std::cin >> arr1[i];
    }
    for(int i = 0; i < n; ++i)
    {
        std::cin >> arr2[i];
    }
    gvector(arr1, arr2, n);
    for(int i = 0; i < n; ++i)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
}
