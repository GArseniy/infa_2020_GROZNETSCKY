#include <iostream>
#include <vector>
#include <string>


void merge_sort_even(std::vector<int> &vec){
    if (vec.size() == 1) return;
    std::vector<int> vec_copy_first(vec.begin(), vec.begin() + vec.size()/2);
    std::vector<int> vec_copy_last(vec.begin() + vec.size()/2, vec.end());
    merge_sort_even(vec_copy_first);
    merge_sort_even(vec_copy_last);
    int i_first = 0;
    int i_last = 0;
    int i_vec = 0;
    while (i_first < vec_copy_first.size() and i_last < vec_copy_last.size())
        if ((vec_copy_first[i_first]%2 + vec_copy_last[i_last]%2)%2 == 0)
            if (vec_copy_first[i_first] < vec_copy_last[i_last])
                vec[i_vec++] = vec_copy_first[i_first++];
            else
                vec[i_vec++] = vec_copy_last[i_last++];
        else
            if (vec_copy_first[i_first]%2 == 0)
                vec[i_vec++] = vec_copy_first[i_first++];
            else
                vec[i_vec++] = vec_copy_last[i_last++];
    while (i_first < vec_copy_first.size())
        vec[i_vec++] = vec_copy_first[i_first++];
    while (i_last < vec_copy_last.size())
        vec[i_vec++] = vec_copy_last[i_last++];
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
    merge_sort_even(vec);
    for (int i = 0; i < vec.size(); i++)
        std::cout << vec[i] << ' ';
    std::cout << '\n';
    return 0;
}
