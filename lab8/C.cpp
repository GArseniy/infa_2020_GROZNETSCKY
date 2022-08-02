#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> table;
    table.resize(n);
    for (int i = 0; i < n; i++){
        table[i].resize(n);
        for (int j = 0; j < n; j++)
            std::cin >> table[i][j];
    }
    int sum0 = 0;
    for (int i = 0; i < n; i++)
        sum0 += table[0][i];
    const int control_sum = sum0;
    for (int i = 1; i < n; i++){
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += table[i][j];
        if (sum != control_sum){
            std::cout << "NO";
            return 0;
        }
    }
    for (int j = 0; j < n; j++){
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += table[i][j];
        if (sum != control_sum){
            std::cout << "NO";
            return 0;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum +=table[i][i];
    }
    if (sum != control_sum){
        std::cout << "NO";
        return 0;
    }
    sum = 0;
    for (int i = 0; i < n; i++){
        sum +=table[i][n - i - 1];
    }
    if (sum != control_sum){
        std::cout << "NO";
        return 0;
    }
    std::cout << "YES";
    return 0;
}
