#include <iostream>
#include <vector>
#include <string>


int delete_extra_zeros(const std::string &s){
    std::string num = "";
    bool is_zeroes = 1;
    for (const char &ch: s){
        if (ch != '0') is_zeroes = 0;
        if (not(is_zeroes)) num += ch;
    }
    if (is_zeroes) num = "0";
    return stoi(num);
}


int compare(std::string s1, std::string s2){
    s1 += '.';
    int len1 = 0;
    for (char &ch: s1) len1 += (ch == '.');
    s2 += '.';
    int len2 = 0;
    for (char &ch: s2) len2 += (ch == '.');
    int len = std::max(len1, len2);
    int diff = len1 - len2;
    while (diff > 0){
        s2 += "0.";
        --diff;
    }
    while (diff < 0){
        s1 += "0.";
        ++diff;
    }
    std::vector<int> n1(len);
    for (int i=0, it1 = 0, stop=s1.length(); i < stop; ++i){
        std::string sub = "";
        while (s1[i] != '.') sub += s1[i++];
        n1[it1++] = delete_extra_zeros(sub);
    }
    std::vector<int> n2(len);
    for (int i=0, it2 = 0, stop=s2.length(); i < stop; ++i){
        std::string sub = "";
        while (s2[i] != '.') sub += s2[i++];
        n2[it2++] = delete_extra_zeros(sub);
    }
    for (int i=0; i < len; ++i){
        if (n1[i] < n2[i]) return -1;
        if (n1[i] > n2[i]) return 1;
    }
    return 0;
}


int main(){
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << compare(s1, s2);
    return 0;
}
