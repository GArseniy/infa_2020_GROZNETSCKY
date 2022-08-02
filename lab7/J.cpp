#include <iostream>
#include <vector>
#include <string>


void print(std::vector<int> &vec){
    for (int i = 0; i < vec.size(); i++)
        std::cout << vec[i] << ' ';
    std::cout << '\n';
}


void bitwise_sort(std::vector<int> &vec){
    int max_int = 0;
    for (int i = 0; i < vec.size(); i++)
        max_int = std::max(max_int, vec[i]);
    int len_max_int = 0;
    while (max_int > 0){
        len_max_int++;
        max_int/=10;
    }
    for (int i = 0, divider = 1; i < len_max_int; i++){
        divider *= 10;
        std::vector<std::vector<int>> ostatki;
        ostatki.resize(10);
        for (int j = 0; j < vec.size(); j++){
            ostatki[(vec[j]%divider)*10/divider].push_back(vec[j]);
        }
        int i_vec = 0;
        for (int j = 0; j < 10; j++){
            for (int k = 0; k < ostatki[j].size(); k++){
                vec[i_vec++] = ostatki[j][k];
            }
        }
        print(vec);
    }
    return;
}


int main(){
    std::string line;
    getline(std::cin, line);
    std::vector<int> vec;
    for (int i = 0; i < line.length(); i++){
        if (line[i] == ' '){
            continue;
        }
        int length = 1;
        while (i + length < line.length() and line[i + length] != ' ')
            length++;
        vec.push_back(stoi(line.substr(i, length)));
        i += length;
    }
    bitwise_sort(vec);
    return 0;
}
