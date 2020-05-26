#include <iostream>

int f()
{
	int number;
	int sum = 0;
	while (true)
	{
		std::cin >> number;
		if (number == 0)
			return sum;
		else
		{
			if (number % 2 == 0)
				sum ++;
		}
	}
}

int main()
{
	std::cout << f();
}
