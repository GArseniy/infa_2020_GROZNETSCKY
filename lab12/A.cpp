#include <vector>
#include <iostream>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i=0; i < n; ++i)
        std::cin >> numbers[i];
    int max_number = 0;
    for (int i=0; i < n; ++i)
        max_number = std::max(max_number, numbers[i]);
    std::vector<bool> is_number_in_numbers(max_number+1, 0);
    for (int i=0; i < n; ++i){
        is_number_in_numbers[numbers[i]] = 1;
    }
    int counter = 0;
    for (int i=0, stop=is_number_in_numbers.size(); i < stop; ++i)
        counter += is_number_in_numbers[i];
    std::cout << counter;
    return 0;
}
