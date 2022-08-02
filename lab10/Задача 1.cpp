#include <iostream>
#include <vector>
#include <string>


std::string sum(std::string a, std::string b, const int BASE = 10){
    while (a[0] == '0') a.erase(0, 1);
    while (b[0] == '0') b.erase(0, 1);
    uint32_t len = std::max(a.length(), b.length());
    int64_t diff = a.length() - b.length();
    for (int i=diff; i > 0; --i) b = '0' + b;
    for (int i=diff; i < 0; ++i) a = '0' + a;
    std::string sum = "";
    bool mem = 0;
    for (int i=0; i < len; ++i){
        int num_1 = a[len - 1 - i] - '0';
        int num_2 = b[len - 1 - i] - '0';
        int sum_num = num_1 + num_2 + mem;
        if (sum_num >= BASE){
            mem = 1;
            sum_num -= BASE;
        } else{
            mem = 0;
        }
        sum = (char)('0' + sum_num) + sum;
    }
    if (mem){
        sum = '1' + sum;
    }
    return sum;
}


int main(){
    std::string a, b;
    std::cin >> a >> b;
    std::cout << sum(a, b, 2) << '\n';
    return 0;
}
