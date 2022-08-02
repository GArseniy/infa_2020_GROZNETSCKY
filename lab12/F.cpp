#include <iostream>
#include <vector>
#include <set>
#include <utility>


struct Edge{
    std::pair <int, int> vec;
    int weight;
};


class EdgesList{
public:
    std::vector <Edge> Edges;
    std::set <int> Vertexes;

    EdgesList(){
        int n;
        std::cin >> n;
        Edges.resize(n);
        for (int i=0; i < n; ++i){
            std::cin >> Edges[i].vec.first >> Edges[i].vec.second >> Edges[i].weight;
            Vertexes.insert(Edges[i].vec.first);
            Vertexes.insert(Edges[i].vec.second);
        }
    }
};


int main(void){
    EdgesList EL;
    for (auto it_v=EL.Vertexes.begin(); it_v != EL.Vertexes.end(); ++it_v){
        int counter = 0;
        int sum = 0;
        for (auto it_e=EL.Edges.begin(); it_e != EL.Edges.end(); ++it_e){
            if (*it_v == it_e->vec.first){
                ++counter;
                sum += it_e->weight;
            }
        }
        std::cout << *it_v << ' ' << counter << ' ' << sum << '\n';
    }

    return 0;
}
