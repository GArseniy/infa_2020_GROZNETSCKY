#include <iostream>
#include <string>

std::string f(int num, int vers)
{
	std::string retu = "";
	int i = 0;
        while (num % 10 > i)
        {
                i ++;
                retu += "v";
	}
	i = 0;
	while ((num - (num % 10)) / 10 > i)
	{
		i ++;
		retu += "<";
	}
	if (vers == 1)
		retu += ".";
	return retu;
}

std::string numeral_system(int num)
{
	std::string unnumber = "";
	while (num >= 60)
	{
		unnumber += f(num % 60, 1);
		num = (num - (num % 60)) / 60;
	}
	unnumber += f(num, 0);
	return unnumber;
}

std::string unf(std::string unnum)
{
	int i = 0;
	int j = 0;
	while (i < unnum.length())
	{
		j = 0;
		while (j < unnum.length() - i - 1)
		{
			char tmp;
			tmp = unnum[j];
			unnum[j] = unnum[j + 1];
			unnum[j + 1] = tmp;
			j ++;
		}
		i ++;
	}
	return unnum;
}

int main()
{
	int number;
	std::cin >> number;
	std::cout << unf(numeral_system(number));
	
}
