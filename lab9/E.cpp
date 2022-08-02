#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<bool> vec(n, 0);
    for (int i=0; i < n; ++i){
        int ahead;
        int behind;
        std::cin >> ahead >> behind;
        if (ahead >= 0 and behind >= 0 and (ahead + behind) == (n - 1)){
            vec[ahead] = 1;
        }
    }
    int counter = 0;
    for (int i=0; i < n; ++i)
        counter += vec[i];
    std::cout << counter;
    return 0;
}
