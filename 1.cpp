#include <iostream>

bool Parz(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
                {
                return false;
                }
    }
    return true;
}

void twoParz(int n)
{
    if(n <=2 )
        return;
    for(int i = 2; i <= n - 2; ++i)
    {
        if(Parz(i) && Parz(i + 2))
            std::cout << i << " and " << i + 2 << ", ";
    }
}

int main()
{   int n = 0;
    std::cin >> n;
    twoParz(n);
}
