#include <iostream>
#include <cmath>
int main()
{
	double a,b,c;
	std::cout << "Vvedite kateti cherez probel: ";
	std::cin >> a >> b;
	c = std::pow(std::pow(a, 2) + std::pow(b, 2), 0.5); 
	std::cout << "Gipotenyza: " << c << std::endl;

	std::cout << "Vvedite lubuyu cifru dlya vixoda iz programmi: ";
        std::cin >> a;
	return 0;

}
