#include <iostream>

int qar(int n)
{
    return n * n;  
}

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

bool Pyut(int a, int b, int c)
{
    int max = c;
    int mid = a;
    int min = b;
    if(min > max)
        swap(min, max);
    if(min > mid)
        swap(min, mid);
    if(mid > max)
        swap(mid, max);
    if(qar(max) == qar(mid) + qar(min))
        return true;
    return false;
}

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    std::cout << Pyut(a, b, c) << std::endl;
}
