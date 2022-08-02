#include <iostream>
#include <string>
#include <vector>


struct Human{
    std::string name;
    bool type;
};


int main(){
    int n;
    std::cin >> n;
    bool news;
    std ::cin >> news;
    std::vector<Human> humans;
    humans.resize(n);
    for (int i = 0; i < n; i++){
        std::cin >> humans[i].name >> humans[i].type;
    }
    int m;
    std::cin >> m;
    for (int day = 1, current = 0; day <= m; day++){
        if (humans.size() >= 2){
            if (humans[current].type){
                news = news;
                if (not (news)){
                    humans.erase(humans.begin() + current);
                    current %= humans.size();
                }
                else
                    current = (current + 1) % humans.size();
            }
            else{
                news = 1 - news;
                if (news)
                    humans[current].type = 1;
                current = (current + 1) % humans.size();
            }
        }
        else break;
    }

    for (int i = 0; i < humans.size(); i++){
        std::cout << humans[i].name << ' '<< humans[i].type << '\n';
    }
}
