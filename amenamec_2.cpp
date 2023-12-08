#include <iostream>

int amenamec_2(int n)
{
	if ((n & (n - 1)) == 0)
	{
		return n;
	}
	int a = 1;
	while (n > a)
	{
		a = a << 1;
	}
	return a >> 1;
}

int main()
{
	int n = 0;
	std::cout << "Enter the number: ";
	std::cin >> n;
	std::cout << "The greatest power of 2 which isn't greater than " << n << " is: " << amenamec_2(n) << std::endl;
}
