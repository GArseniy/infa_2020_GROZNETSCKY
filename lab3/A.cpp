#include <iostream>
#include <string>

int main()
{
	std::string str = "5";
	int a = std::stoi( str );
	int b = a + a;
	std::cout << (a + b);
		
}
