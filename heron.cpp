#include <iostream>

double armat(double n)
{
    double x = 1.0;
    for(int i = 0; i < 10; ++i)
    {
        x = (x + n / x) / 2;  
    }
    return x;
}

bool heron(double a, double b, double c)
{
	double kis = (a + b + c) / 2;
	if(a + b > c && a + c > b && b + c > a)
	{
		std::cout << "It's a trinagle and it's surface = " << armat(kis * ((kis - a) + (kis - b) + (kis - c))) << std::endl;
		return true;
	}
	return false;
}

int main()
{
	double a = 0.0, b = 0.0, c = 0.0;
	std::cout << "Enter the values of tringle's sides: " << std::endl;
	std::cin >> a >> b >> c;
	bool pat = heron(a, b, c);
	if(pat == false)
	{
		std::cout << "It's not a triangle " << std::endl;
	}
}
