#include <iostream>

bool three(int n)
{
    if(n < 10)
    {
        if(n == 3)
        return true;
        return false;
    }
    return (n % 10 == 3) || three(n / 10);
}

bool five(int n)
{
    if(n < 10)
    {
        if(n == 5)#include <iostream>

bool three(int n)
{
    if(n < 10)
    {
        if(n == 3)
        return true;
        return false;
    }
    return (n % 10 == 3) || three(n / 10);
}

bool five(int n)
{
    if(n < 10)
    {
        if(n == 5)
        {
            return false;
        }
        return true;
    }
    return (n % 10 != 5) && five(n / 10);
}

bool increas(int n)
{
    if(n < 100)
    {
        if(n % 10 > (n / 10) % 10)
        {
            return true;
        }
        return false;
    }
    return (n % 10 > ((n / 10) % 10)) && increas(n / 10);
}

bool nodecreas(int n)
{
    if(n < 100)
    {
        if(n % 10 >= ((n / 10) % 10))
        {
            return true;
        }
        return false;
    }
    return (n % 10 >= ((n / 10) % 10)) && increas(n / 10);
}

bool sum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    if(sum > 20)
    {
        return true;
    }
    return false;
}

bool mul(int n)
{
    int sum = 0;
    while(n)
    {
        sum *= n % 10;
        n /= 10;
    }
    if(sum < 30)
    {
        return true;
    }
    return false;
}

void Print(int n, bool (*ptr[])(int), int size)
{
    for(int i = 0; i < size; ++i)
    {
    if(ptr[i](n))
    {
        std::cout << i + 1 << " - " << "YES";
    }
    else
    std::cout << i + 1 << " - " << "NO";
    std::cout << std::endl;
    }
}

int Count(int n)
{
    int count = 0;
    while(n)
    {
        ++count;
        n /= 10;
    }
    return count;
} 

int Sum(int n)
{
    int sum = 0;
    int count = Count(n);
    while(n)
    {
        int tmp = n % 10;
        int mul = 1;
        for(int i = 0; i < count; ++i)
        {
            mul *= tmp;
        }
        sum += mul;
        n /= 10;
    }
    return sum;
}

bool armstrong(int n)
{
    int sum = Sum(n);
    if(n == sum)
    return true;
    return false;
}

void Printarm(int n)
{
    if(n >= 10)
    {
        for(int i = 0; i <= 9; ++i)
        {
            std::cout << i << " ";
        }
    }
    for(int i = 10; i <= n; ++i)
    {
        if(armstrong(i))
        {
            std::cout << i << " ";
        }
    }
}
int main()
{
    int n = 0;
    std::cin >> n;
    bool (*ptr[6])(int) = {three, five, increas, nodecreas, sum, mul};
    Print(n, ptr, 6);
    Printarm(n);
    std::cout << std::endl;
}
        {
            return false;
        }
        return true;
    }
    return (n % 10 != 5) && five(n / 10);
}

bool increas(int n)
{
    if(n < 100)
    {
        if(n % 10 > (n / 10) % 10)
        {
            return true;
        }
        return false;
    }
    return (n % 10 > ((n / 10) % 10)) && increas(n / 10);
}

bool nodecreas(int n)
{
    if(n < 100)
    {
        if(n % 10 >= ((n / 10) % 10))
        {
            return true;
        }
        return false;
    }
    return (n % 10 >= ((n / 10) % 10)) && increas(n / 10);
}

bool sum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    if(sum > 20)
    {
        return true;
    }
    return false;
}

bool mul(int n)
{
    int sum = 0;
    while(n)
    {
        sum *= n % 10;
        n /= 10;
    }
    if(sum < 30)
    {
        return true;
    }
    return false;
}

void Print(int n, bool (*ptr[])(int), int size)
{
    for(int i = 0; i < size; ++i)
    {
    if(ptr[i](n))
    {
        std::cout << i + 1 << " - " << "YES";
    }
    else
    std::cout << i + 1 << " - " << "NO";
    std::cout << std::endl;
    }
}

int Count(int n)
{
    int count = 0;
    while(n)
    {
        ++count;
        n /= 10;
    }
    return count;
} 

int Sum(int n)
{
    int sum = 0;
    int count = Count(n);
    while(n)
    {
        int tmp = n % 10;
        int mul = 1;
        for(int i = 0; i < count; ++i)
        {
            mul *= tmp;
        }
        sum += mul;
        n /= 10;
    }
    return sum;
}

bool armstrong(int n)
{
    int sum = Sum(n);
    if(n == sum)
    return true;
    return false;
}

void print(int n)
{
    for(int i = 0; i <= n; ++i)
    {
        if(armstrong(i))
        {
            std::cout << i << " ";
        }
    }
}
int main()
{
    int n = 0;
    std::cin >> n;
    bool (*ptr[6])(int) = {three, five, increas, nodecreas, sum, mul};
    Print(n, ptr, 6);
    print(n);
    std::cout << std::endl;
}
