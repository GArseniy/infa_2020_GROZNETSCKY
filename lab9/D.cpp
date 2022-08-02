#include <iostream>
#include <string>
#include <vector>


int main(){
    std::string line;
    getline(std::cin, line);
    std::string word = "";
    std::vector<int> vec;
    for (int i=0, len = line.length();; ++i){
        if (line[i] == ' '){
            if (word != "")
                vec.push_back(stoi(word));
            word = "";
            continue;
        }
        word += line[i];
        if (i == len - 1){
            if (word != "")
                vec.push_back(stoi(word));
            word = "";
            break;
        }
    }
    for (int i=0; i < vec.size(); ++i){
        for (int j=0; j <= i; j++){
            for (int k=j; k <= i; k++){
                std::cout << vec[k] << ' ';
            }
            std::cout << '\n';
        }
    }
    return 0;
}
