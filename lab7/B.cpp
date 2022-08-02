#include <iostream>


int main(){
    int n;
    std::cin >> n;
    bool flag = 0;
    for (int i = 0; i < n; i++){
        int current;
        std::cin >> current;
        if (current % 4 == 0 and current/1000 != 4 and current/1000 != 5){
            std::cout << current << std::endl;
            flag = 1;
        }
        else if (current % 7 == 0 and current/1000 != 7 and current/1000 != 1){
            std::cout << current << std::endl;
            flag = 1;
        }
        else if (current % 9 == 0 and current/1000 != 9 and current/1000 != 8){
            std::cout << current << std::endl;
            flag = 1;
        }
    }
    if (not flag){
        std::cout << 0 << std::endl;
    }
    return 0;
}
