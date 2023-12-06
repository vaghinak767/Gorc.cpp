#include <iostream>

double armat(double n)
{
    double x = 1.0;
    for(int i = 0; i < 10; ++i)
    {
        x = (x + n / x) / 2;  
    }
    return x;
}

int main()
{
    double n = 0.0;
    std::cin >> n;
    std::cout << armat(n) << std::endl;
}
