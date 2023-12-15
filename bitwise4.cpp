#include <iostream>

int sum(int n, int m)
{
    while (m)
    {
        int c = n & m;
        n ^= m;
        m = c << 1;
    }
    return n;
}

int mul(int n, int m)
{
    int res = 0;
    while(m)
    {
        if(m & 1)
        {
            res = sum(res, n);
        }
        n <<= 1;
        m >>= 1;
    }
    return res;
}

int ast(int n, int m)
{
    int res = 1;
    int deg = 1;
    while(m)
    {
        int tmp = deg;
        while((tmp != 0) && ((m & 1) != 0))
        {
            res = mul(res, n);
            --tmp;
        }
        deg <<= 1;
        m >>= 1;
    }
    return res;
}

int main() 
{
    int n = 0, m = 0;
    std::cin >> n >> m;
    std::cout << ast(n, m);
    return 0;
}
