#include <iostream>

int main()
{
        int num;
        std::cin >> num;
        int num_copy = num;
        int i = 1;
        while (i <= num_copy)
        {
                i ++;
                while (num % i == 0)
                        {
                                num /= i;
                                std::cout << i << std::endl;
                        }
        }
}

