#include <iostream>

void avector(double arr1[], double arr2[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        arr1[i] *= arr2[i];   
    }
}

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

double cos(double arr1[], double arr2[], int n)
{
    double erk1 = vektorerk(arr1, n);
    double erk2 = vektorerk(arr2, n);
    avector(arr1, arr2, n);
    double sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum += arr1[i];
    }
    return sum / (erk1 * erk2);
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
    std::cout << cos(arr1, arr2, n) << std::endl;
}
