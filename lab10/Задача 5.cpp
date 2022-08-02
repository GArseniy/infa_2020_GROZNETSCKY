#include <iostream>
#include <vector>
#include <utility>
#include <string>


typedef std::vector<std::pair<double, double>> vec_pair_type;


vec_pair_type intersection(const vec_pair_type &vec){
    vec_pair_type ret_vec;
    for (int i=0; i < vec.size(); ++i){
        for (int j=(i + 1); j < vec.size(); ++j){
            if (vec[i].second >= vec[j].first){
                std::pair<double, double> intersec;
                intersec.first = vec[i].first;
                intersec.second = vec[j].second;
                ret_vec.push_back(intersec);
            }
        }
    }
    return ret_vec;
}


int main(){
    int n;
    std::cin >> n;
    vec_pair_type vec(n);
    for (int i=0; i < n; ++i){
        std::cin >> vec[i].first >> vec[i].second;
    }
    vec_pair_type mod_vec = intersection(vec);
    for (int i=0; i < mod_vec.size(); ++i){
        std::cout << mod_vec[i].first << ' ' << mod_vec[i].second << '\n';
    }
    return 0;
}
