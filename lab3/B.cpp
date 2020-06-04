#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int i = 0;
	int x, y;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
	while (i < n)
	{
		i ++;
		std::cin >> x >>  y;
		if (x > 0 && y > 0)
			q1 ++;
		if (x < 0 && y > 0)
			q2 ++;
		if (x < 0 && y < 0)
			q3 ++;
		if (x > 0 && y < 0)
			q4 ++;
	}
	if (q1 >= q2 && q1 >= q3 && q1 >= q4)
		{std::cout << 1 << " "  << q1 << std::endl;}
	else
	{
		if (q2 >= q3 && q2 >=q4)
			{std::cout << 2 << " "  << q2 << std::endl;;}
		else
		{
			if (q3 >= q4)
				{std::cout << 3 << " "  << q3 << std::endl;;}
			else
				{std::cout << 4 << " "  << q4 << std::endl;;}
		}
	}
}
