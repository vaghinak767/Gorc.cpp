#include <iostream>

bool stg(int, int);
int poxparz(int);

int main()
{
    int n = 0;
    std::cin >> n;
    std::cout << poxparz(n) << std::endl;
}

bool stg(int i, int n)
{
    for(int j = 2; j < i; ++j)
    {
        if(i % j == 0 && n % j == 0)
        return false;
    }
    return true;
}

int poxparz(int n)
{
    if(n < 1)
    {
        return 0;
    }
    int count = 1;
    for(int i = 2; i < n; ++i)
    {
        if(n % i != 0)
        {
            if(stg(i, n))
            {
                ++count;
            };
        }
    }
    return count;
}
