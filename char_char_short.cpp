#include <iostream>

void foo(int target, char c1, char c2, short sh)
{
    std::cout << target << std::endl;
    char *ptr =(char*)&target;
    *ptr = c1;
    ++ptr;
    *ptr = c2;
    ++ptr;
    short *ptr2 = (short*)ptr;
    *ptr2 = sh;
    std::cout << target << std::endl;
}

int main()
{
    int target = 0;
    char c1;
    char c2;
    short sh = 0;
    std::cin >> target >> c1 >> c2 >> sh;
    foo(target, c1, c2, sh);
}
