#include <iostream>
#include <string>

int main()
{
	int number;
	int end;
	end = 0;
	std::cin >> number;
	std::string answer;
        while(end != 1)
        {
                if (number % 2 == 0)
                {
                        number /= 2;
                        if (number == 1)
                        {
				answer = "YES";
                                end = 1;
                        }

                }
                else
                {
			answer = "NO";
                        end = 1;
                }
        }
	std::cout << answer;
}	
