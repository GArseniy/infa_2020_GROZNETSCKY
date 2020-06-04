#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int i = 0;
	int num;
	int min1 = 0;
	int min2 = 0;
	int max1 = 0;
	int max2 = 0;
	while (i < n)
	{
		i ++;
		std::cin >> num;
		if (i == 1)
		{
			min2 = num;
			max2 = num;
		}
		if (i == 2)
		{
			if (num > min2)
			{
				min1 = min2;
				min2 = num;
			}
			else
				min1 = num;
			if (num < max2)
			{
				max1 = max2;
				max2 = num;
			}
			else 
				max1 = num;
		}
		if (i >= 3)
		{	
			if (num < min1)
			{
				min2 = min1;
				min1 = num;
			}
			else
				if (num < min2)
					min2 = num;
			if (num > max1)
			{
				max2 = max1;
				max1 = num;
			}
			else
				if (num > max2)
					max2 = num;
		}
	}
	std::cout << (min1 + min2) << " "  << (max1 + max2) << std::endl;
}
