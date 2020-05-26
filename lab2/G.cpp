#include <iostream>

int main()
{
	int num;
	int end = 0;
	std::cin >> num;
	int i = 1;
	while ((i < num/2 + 1) && (end == 0))
	{
		i ++;
		if ((num % i == 0) && (num != 1) && (num != 2) && (num != 3))
		{
			end = 1;
			std::cout << 0;
		}
	}
	if (end == 0)
		std::cout << 1;
}
