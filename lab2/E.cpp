#include <iostream>

int f()
{
	int number;
	int max_num = 1;
	while (true)
	{
		std::cin >> number;
		if (number != 0)
		{
			if (number % 2 == 0) 
			{
				if (max_num % 2 != 0)
					max_num = number;
				else
					if (number > max_num)
						max_num = number;
			}
		}
		else
		{
			if (max_num % 2 != 0)
				return 0;
			else 
				return max_num;
		}
	}
}

int main()
{
	std::cout << f();
}

