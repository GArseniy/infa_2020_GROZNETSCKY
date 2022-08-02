#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++){
        int tmp;
        std::cin >> tmp;
        vec.push_back(tmp);
    }
    int max_min_diff = 0;
    for (int i = 0; i < n; i++){
        int min_diff = n * 10;
        if (vec[i] == 1){
            for (int j = 0; j < n; j++)
                if (vec[j] == 2)
                    min_diff = std::min(min_diff, abs(j - i));
        }
        if (min_diff != n * 10)
            max_min_diff = std::max(max_min_diff, min_diff);
    }
    std::cout << max_min_diff;
    return 0;
}
