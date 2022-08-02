#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;

    std::vector<int> colours(n+1, 0);
    for (int i = 1; i <= n; i++)
        std::cin >> colours[i];

    std::vector<int> buckets(n+1, 0);
    for (int i = 1; i <= n; i++)
        std::cin >> buckets[i];

    std::vector<int> answers(n+1, 0);
    answers[1] = 1;
    for (int i = 2; i <= n; i++){
        if (colours[i-1] == colours[i]) ///< прыжок из предыдущей клетки
            answers[i] += answers[i-1];
        if (colours[i-2] == colours[i]) ///< прыжок из пред-предыдущей клетки
            answers[i] += answers[i-2];
        if (colours[i-1] != buckets[i-1] and buckets[i-1] == colours[i]) ///< прыжок из предыдущей клетки (перекрасившись)
            answers[i] += answers[i-1];
        if (colours[i-2] != buckets[i-2] and buckets[i-2] == colours[i]) ///< прыжок из пред-предыдущей клетки (перекрасившись)
            answers[i] += answers[i-2];
        answers[i] %= 947;
    }
    std::cout << answers[n];
    return 0;
}
