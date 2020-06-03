#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	std::string tmp = "";
	tmp += str[0];
	tmp += str[1];
	int hours = std::stoi(tmp);
	tmp = "";
	tmp += str[3];
	tmp += str[4];
	int minutes = std::stoi(tmp);
	tmp = "";
	tmp += str[6];
	tmp += str[7];
	int seconds = std::stoi(tmp);

	std::cin >> str;
	tmp = "";
	tmp += str[0];
        tmp += str[1];
        hours = std::stoi(tmp) - hours;
	tmp = "";
	tmp += str[3];
        tmp += str[4];
        minutes = std::stoi(tmp) - minutes;
	tmp = "";
	tmp += str[6];
        tmp += str[7];
        seconds = std::stoi(tmp) - seconds;

	if (seconds < 0)
	{
		seconds += 60;
		minutes -= 1;
	}
	if (minutes < 0)
        {
                minutes += 60;
                hours -= 1;
        }
	if (hours < 0)
                hours += 24;

	seconds += minutes * 60;
	seconds += hours * 3600;

	std::cout << seconds << std::endl;
}
