#include <iostream>
#include <cmath>

double qar(double a)
{
    return a * a;
}

double sin(double a, double b)
{
    double c = sqrt(qar(a) + qar(b));
    return a / c;
}

double cos(double a, double b)
{
    double c = sqrt(qar(a) + qar(b));
    return b / c;
}

double tg(double a, double b)
{
    return a / b;
}

double ctg(double a, double b)
{
    return b / a;
}

int main()
{
    double a = 0, b = 0;
    std::cin >> a >> b;
    std::cout <<"sin(A) = " <<  sin(a, b) << std::endl << "cos(A) = " <<  cos(a, b) << std::endl <<
        "tg(A) = " << tg(a, b) << std::endl << "ctg(A) = " << ctg(a, b) << std::endl;
}
