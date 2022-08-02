#include <iostream>
#include <list>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::list<int> goblin_queue;
    std::vector<int> return_data;
    for (int i = 0; i < n; i++){
        char code;
        std::cin >> code;
        if (code == '+'){
            int goblin_id;
            std::cin >> goblin_id;
            goblin_queue.push_back(goblin_id);
        }
        if (code == '*'){
            auto it = goblin_queue.begin();
            for (int j = 0, stop = (int)(goblin_queue.size()/2.0 + 0.5); j < stop; j++)
                it++;
            int goblin_id;
            std::cin >> goblin_id;
            goblin_queue.insert(it, goblin_id);
        }
        if (code == '-'){
            return_data.push_back(goblin_queue.front());
            goblin_queue.pop_front();
        }
    }
    for (int i = 0; i < return_data.size(); i++){
        std::cout << return_data[i] << std::endl;
    }
    return 0;
}
