#include <iostream>

int f()
{
        int number = 0;
        int max_num = 0;
	int k = 0;
        while (true)
        {
                std::cin >> number;
                if (number != 0)
		{
 	        	if (number > max_num)
			{
				max_num = number;
				k = 0;
			}
			if (number == max_num)
				k ++;
		}
		else
			return k;
        }
}

int main()
{
        std::cout << f();
}

