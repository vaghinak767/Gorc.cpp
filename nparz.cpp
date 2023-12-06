#include <iostream>

bool parz(int n)
{
    if(n < 2)
        return false;
    if(n == 2 || n == 3)
        return true;
    if((n - 1) % 6 == 0 || (n + 1) % 6 == 0)
    return true;
    return false;
}

void nparz(int n)
{
    int count = 0;
    if(n <= 0)
        return;
    for(int i = 2; ; ++i)
    {
        if(parz(i))
            ++count;
        if(count == n){
            std::cout << i << std::endl;
            break;
        }
    }
}


int main()
{
    int n = 0;
    std::cin >> n;
    nparz(n);
}
