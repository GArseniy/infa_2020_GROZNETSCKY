#include <iostream>
#include <set>
#include <string>

std::string word_down(std::string word){
    for (int i=0, len = word.length(); i < len; i++){
        if ('A' <= word[i] and word[i] <= 'Z')
            word[i] += 32;
    }
    return word;
}


int main(){
    int n;
    std::cin >> n;
    std::set<std::string> dic;
    std::string word;
    for (int i = 0; i < n; i++){
        std::cin >> word;
        dic.insert(word_down(word));
    }
    for (auto rit=dic.rbegin(); rit != dic.rend(); ++rit){
        std::cout << *rit << ' ';
    }
    return 0;
}
