#include <vector>
#include <string>
#include <iostream>


int main(){
    std::string s;
    std::cin >> s;
    int answer = 0;
    int counter_L = 0;
    int counter_R = 0;
    for (char &ch: s){
        counter_R += ch == 'R';
        counter_L += ch == 'L';
        if (counter_L != 0 and counter_L == counter_R){
            counter_L = 0;
            counter_R = 0;
            ++answer;
        }
    }
    std::cout << '\n' << answer;
    return 0;
}
