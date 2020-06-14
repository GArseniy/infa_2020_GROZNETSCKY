#include <iostream>
#include <string>

std::string f(int num, int vers)
{
	std::string retu = "";
	int i = 0;
        while (num % 10 > i)
        {
                i ++;
                retu = "v" + retu;
	}
	i = 0;
	while ((num - (num % 10)) / 10 > i)
	{		
		i ++;
		retu = "<" + retu;
	}
	if (vers == 1)
		retu = "." + retu;
	return retu;
}

std::string numeral_system(int num)
{
	std::string unnumber = "";
	while (num >= 60)
	{
		unnumber = f(num % 60, 1) + unnumber;
		num = (num - (num % 60)) / 60;
	}
	unnumber = f(num, 0) + unnumber;
	return unnumber;
}


int main()
{
	int number;
	std::cin >> number;
	std::cout << numeral_system(number);
}
