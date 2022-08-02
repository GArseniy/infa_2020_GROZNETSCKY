#include <iostream>


int main(){
    int n;
    std::cin >> n;
    int table[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> table[i][j];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            std::cout << table[n-1-j][i] << ' ';
        std::cout << '\n';
    }
    return 0;
}
