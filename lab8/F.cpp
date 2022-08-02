#include <iostream>


int main(){
    int n;
    std::cin >> n;
    double f_last = 0;
    double m_current = 0;
    for (int i = 0; i < n; i++){
        m_current = 0.3 * (100 + 2*f_last) + 10;
        f_last = 0.7 * (100 + 2*f_last);
    }
    std::cout << uint64_t(m_current);
    return 0;
}
