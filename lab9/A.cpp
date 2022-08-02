#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++)
        std::cin >> vec[i];
    bool empty_cout = 1;
    for (int i = 0; i < n; i++){
        if (vec[i] % 4 == 0 and vec[i]/1000 != 4 and  vec[i]/1000 != 5){
            std::cout << vec[i] << '\n';
            empty_cout = 0;
        }
        else if (vec[i] % 7 == 0 and vec[i]/1000 != 7 and  vec[i]/1000 != 1){
            std::cout << vec[i] << '\n';
            empty_cout = 0;
        }
        else if (vec[i] % 9 == 0 and vec[i]/1000 != 9 and  vec[i]/1000 != 8){
            std::cout << vec[i] << '\n';
            empty_cout = 0;
        }
    }
    if (empty_cout)
        std::cout << 0;
    return 0;
}
