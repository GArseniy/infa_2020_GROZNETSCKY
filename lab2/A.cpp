#include <iostream>

int NOD(int a, int b)
{
	while (true)
	{
		if (a > b)
		{
			a = a % b;
			if (a == 0)
				return b;
		}
		else 
		{
			b = b % a;
			if (b == 0)
				return a;
		}
	}

}

int main()
{
	int a,b;
	std::cin >> a;
	std::cin >> b;
	std::cout << NOD(a, b);
}
