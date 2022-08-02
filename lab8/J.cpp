#include <iostream>

struct Move{
    int num;
    int from;
    int to;
};

///< begin of my program

#include <vector>
#include <stack>

std::vector<Move> recursive_hanoi(int n, int from, int to){
    static std::vector<std::stack<int>> towers(3);
    static std::vector<Move> vec_moves;
    if (vec_moves.empty() and towers[0].empty())
        for (int i = n; i > 0; i--)
            towers[0].push(i);

    if (n == 1){
        vec_moves.push_back(Move{towers[from-1].top(), from, to});
        towers[to-1].push(towers[from-1].top());
        towers[from-1].pop();
        return vec_moves;
    }
    int tmp = 6 - from - to;
    if (from == 2 and tmp == 3){
        recursive_hanoi(n-1, 2, 1);
        recursive_hanoi(n-1, 1, 3);
    }
    else
        recursive_hanoi(n-1, from, tmp);
    recursive_hanoi(1, from, to);
    if (tmp == 2 and to == 3){
        recursive_hanoi(n-1, 2, 1);
        recursive_hanoi(n-1, 1, 3);
    }
    else
        recursive_hanoi(n-1, tmp, to);
    return vec_moves;
}

Move* hanoi_repair(int N){
    std::vector<Move> vec_moves = recursive_hanoi(N, 1, 3);
    vec_moves.push_back(Move{5, 5, 5});
    Move* moves = new Move[vec_moves.size()];
    for (int i = 0, stop = int(vec_moves.size()); i < stop; i++)
        moves[i] = vec_moves[i];
    return moves;
}

///< end of my program

bool check_move(int num, int from, int to, int N, int* mass)
{
    int i;
    for (i = 0; i < num - 1; i++) //проверяем, что нет более лёгких там "куда"
    {
    if (mass[i] == to) {
        return false;
    }
    }
    if ((from == 2) && (to == 3)) {
        return false; //ремонт как бы
    }
    for (i = 0; i < num - 1; i++) //проверяем, что нет более лёгких там "откуда"
    {
    if (mass[i] == from) {
        return false;
    }
    }
    return true;
}

int correct_check(int N, Move* arr)
{
    int mass[10];
    int flag = 1;
    long int i;
    for(i = 0; i < N; i++){
    mass[i] = 1;
    }
    i = 0;
    while (arr[i].from != 5){
    i++;
    }
    long int k = i;
    if (k > 200000){
    flag = 0;
    return flag;
    }
    for (i = 0; i < k; i++){
    if (check_move(arr[i].num, arr[i].from, arr[i].to, N, mass)){
        mass[arr[i].num- 1] = arr[i].to;
    }
    else {
        flag = 0;
        return flag;
    }
    }
    for (i = 0; i < N; i++){
    if (mass[i] != 3){
        flag = 0;
        return flag;
       }
    }
    return flag;
}

int main()
{
    Move* arr_;
    int i = 0;
    int N_;
    std::cin >> N_;
    arr_ = hanoi_repair(N_); //функция студентов
    if (correct_check(N_, arr_) == 1) {
    std::cout << "Yes";
    }
    else {
    std::cout << "No";
    }
    delete[] arr_;
    return 0;
}
