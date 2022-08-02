#include <iostream>
#include <vector>
#include <string>


std::vector<int> inc(std::vector<int> vec, const int BASE=10){
    int i=vec.size() - 1;
    while (i >= 0){
        if (vec[i] == BASE-1){
            vec[i] = 0;
        } else{
            ++vec[i];
            break;
        }
        --i;
    }
    if (vec[++i] == 0)
        ++vec[i];
    return vec;
}


int main(){
    std::string str;
    std::cin >> str;
    std::vector<int> vec(str.length());
    for (int i=0, len = str.length(); i < len; ++i){
        vec[i] = str[i] - '0';
    }
    std::vector<int> vec_incremented = inc(vec);
    for (auto &x: vec_incremented){
        std::cout << x << ' ';
    }
    return 0;
}
