#include <iostream>
double ast(double a, int n)
{
    double tmp = 1.0;
    for(int i = 0; i < n; ++i)
    {
        tmp *= a;
    }
    return tmp;
}

double ln(double a)
{
    double sum = 0.0;
    for(int i = 1; i < 1000; ++i)
    {
       sum += (ast((a - 1) / (a + 1), 2 * i - 1)) / (2 * i - 1);  
    }
    return 2 * sum;
}

double log(int a, int b)
{
    return ln(b) / ln (a);
}


int main()
{
    double a, b;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout <<"ln(" << a << ") = " <<  ln(a) << std::endl <<"ln(" << b << ") = " << ln(b) << std::endl <<"log(" << a << ", " << b << ") = " << log(a, b) << std::endl;
}
