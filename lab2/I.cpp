#include <iostream>
#include <string>


int main()
{
	int v;
	std::string number;
	std::cin >> v >> number;
	int fine = 0;
	while (number != "A999AA")
	{
		if (v > 60)
		{
			if ((number[1] == number[2]) && (number[2] == number[3]))
				fine += 1000;
			else if ((number[1] == number[2]) || (number[2] == number[3]) || (number[1] == number[3]))
                                fine += 500;
			else
				fine += 100;
		}
		std::cin >> v >> number;
	}
	std::cout << fine;
}
