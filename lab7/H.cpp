#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> tapochki;
    for (int i = 0; i < n; i++){
        int tmp;
        std::cin >> tmp;
        tapochki.push_back(tmp);
    }
    int min_diff = n*1000;
    for (int i = 0; i < n; i++){
        if (tapochki[i] > 0)
            continue;
        for (int j = i + 1; j < n; j++)
            if (tapochki[i] + tapochki[j] == 0)
                min_diff = std::min(min_diff, j-i);
    }
    if (min_diff == n*1000)
        min_diff = 0;
    std::cout << min_diff;
    return 0;
}
