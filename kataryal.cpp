#include <iostream>

bool kat(int n)
{
    int sum = 0;
    if(n <= 1)
        return false;
    for(int i = 1; i <= n / 2; ++i)
    {
        if(!(n % i))
        {
            sum += i;
        }
    }
    if(sum == n)
        return true;
    return false;
}

void bolor(int n)
{
    for(int i = 2; i <= n; ++i)
    {
        if(kat(i))
            std::cout << i << " " << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    int n = 0;
    std::cin >> n;
    bolor(n);
}
