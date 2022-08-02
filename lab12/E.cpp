#include <iostream>
#include <stack>


int main(){
    std::stack<int> st;
    int number;
    std::cin >> number;
    while (number){
        if (number > 0){
            st.push(number);
            std::cin >> number;
            continue;
        }
        if (st.size() == 0){
            std::cin >> number;
            continue;
        }
        if (st.top() + number > 0)
            st.top() += number;
        else
            st.pop();
        std::cin >> number;
    }
    if (st.size() == 0) std::cout << "0 -1\n";
    else std::cout << st.size() << ' ' << st.top() << '\n';
    return 0;
}
