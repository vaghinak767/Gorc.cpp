#include <iostream>

double ast(double a)
{
    return a * a;
}

double armat(double a)
{
    double x = 1.0;
    for(int i = 0; i < 100; ++i)
    {
        x = (x + a / x) / 2;
    }
    return x;
}

double vektorerk(double arr[], int n)
{
    double sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum += ast(arr[i]);
    }
    return armat(sum);
}

int main()
{
    double arr[50] = {};
    int n = 0;
    std::cin >> n;
    for(int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }
    std::cout << vektorerk(arr, n) << std::endl;
}
