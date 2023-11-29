#include <iostream>
#include <map>

int sum(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int diva(int a, int b)
{
    return a / b;
}

int sub(int a, int b)
{
    return a - b;
}
int main()
{
    std::map<char, int(*)(int, int)> m;
    m['+'] = sum;
    m['-'] = sub;
    m['*'] = mul;
    m['/'] = diva;
    int a = 0, b = 0;
    std::cin >> a >>b;
    std::cout << a << " + " << b << " = " << m['+'](a, b) << std::endl;
    std::cout << a << " - " << b << " = " << m['-'](a, b) << std::endl; 
    std::cout << a << " * " << b << " = " << m['*'](a, b) << std::endl; 
    std::cout << a << " / " << b << " = " << m['/'](a, b) << std::endl; 
}
