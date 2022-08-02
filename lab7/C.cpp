#include <iostream>
#include <vector>
#include <cmath>


void print(double number){
    double x = round(number * 1000) / 1000.0;
    if (((int) x) == x)
        printf("%.1f", x);
    else if (((int) (x*10)) == (x*10))
        printf("%.1f", x);
    else if (((int) (x*100)) == (x*100))
        printf("%.2f", x);
    else
        printf("%.3f", x);
    return;
}

int main(){
    int tmp;
    std::cin >> tmp;
    std::vector<int> x;
    while (tmp != 0){
        x.push_back(tmp);
        std::cin >> tmp;
    }
    int n = x.size();
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += x[i];
    }
    double M_x = (double) sum / n;
    double summer = 0;
    for (int i = 0; i < n; i++){
        summer += pow(x[i] - M_x, 2);
    }
    double D_x = summer / n;
    print(M_x);
    std::cout << ' ';
    print(D_x);
    std::cout << '\n';
    return 0;
}
