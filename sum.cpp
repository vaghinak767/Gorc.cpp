#include <iostream>

long long fac(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return fac(n - 1) * n;
}

double ast(double n, int m)
{
    if(m == 0)
    {
        return 1;
    }
    double mul = n;
    for(int i = 1; i < m; ++i)
    {
        mul *= n;
    }
    return mul;
}

double art(double x, int i)
{
    return ast(x, i + 1)/(fac(3 * i) + ast(2, i + 1));
}

double sum(int x, int n)
{
    double sum = 0;
    for(int i = 1; i <= n; ++i)
    {
        int l = 1;
        if(i % 2)
            l = -1;
        sum += (l * art(x, i));
    }
    return sum;
}

int main()
{
    int n = 0;
    double x = 0.0;
    std::cin >> n >> x;
    std::cout << sum(x, n) << std::endl;
}
