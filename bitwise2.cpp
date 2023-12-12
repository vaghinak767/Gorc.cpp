#include <iostream>

// int** foo()
// {
//     int *p;
//     return &p;
// }

// int main()
// {
//     int x = 15;
//     *(*foo() = &x) = 18;
//     std::cout << x << std::endl;
// }

//-----------------------------<< revers and swap >>-------------------------------

// void swap1(unsigned int& x, int i, int j)
// {
//     bool b = ((1 << i) & x);
//     bool b1 = ((1 << j) & x);
//     if(b1 != b)
//     {
//         x ^= (1 << i);
//         x ^= (1 << j);
//     }
// }

// void revers(unsigned int &x, int i, int j)
// {
//     if((x & (x - 1)) == 0)
//     {
//         swap1(x, i, j);
//         return;
//     }
//     if(i > j)
//     {
//         while(i > j)
//         {
//             swap1(x, i, j);
//             --i;
//             ++j;
//         }
//     }
//     else
//         while(i < j)
//         {
//             swap1(x, i, j);
//             ++i;
//             --j;
//         }
// }

// int main()
// {
//     unsigned int x = 0;
//     int i = 0, j = 0;
//     std::cout << "x = ";
//     std::cin >> x;
//     std::cout << "i = ";
//     std::cin>> i;
//     std::cout << "j = ";
//     std::cin >> j;
//     revers(x, i, j);
//     std::cout << "x = " << x << std::endl; 
// }

//------------------------<< bit sum >>----------------------------

int sum_of_bit(int n, int m)
{
    int sum = 0;
    bool carry = 0;
    for(int i = 0; i < (sizeof(int) * 8); ++i)
    {
        sum += (((((n >> i) & 1) ^ ((m >> i) & 1)) ^ carry) << i);
        if(carry == 1 && ((n >> i) & 1) | ((m >> i) & 1))
        carry |= ((n >> i) & 1) & ((m >> i) & 1);
    else
        carry = ((n >> i) & 1) & ((m >> i) & 1);
    }
    return sum;
}

int summ(int n, int m)
{
    int carry = 0;
    while(m)
    {
        carry = n & m;
        n ^= m;
        m =(carry << 1);
    }
    return n;
}

int main()
{
    int n = 0, m = 0;
    std::cin >> n >> m;
    std::cout << summ(n, m) << std::endl;
}
