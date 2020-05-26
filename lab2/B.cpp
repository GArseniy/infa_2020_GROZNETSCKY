#include <iostream>
#include <string>

std::string is_year(int year)
{
	std::string answer;
	if ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0))
		answer = "YES";
	else
		answer = "NO";
	return answer;
}
int main()
{
	int year;
	std::cin >> year;
	std::cout << is_year(year);
}
