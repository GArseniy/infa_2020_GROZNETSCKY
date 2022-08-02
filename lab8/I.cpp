#include <iostream>


int main(){
    char line[100000+1+1];
    int len = 0;
    line[len++] = '#';
    line[len++] = std::cin.get();
    while (line[len-1] != '\n')
        line[len++] = std::cin.get();
    len--;
    for (int i = 1; i < len; i++){
        int polyndrom_len = 1;
        for (int j = 1;; j++)
            if (line[i+j] == line[i-j])
                polyndrom_len += 2;
            else
                break;
        std::cout << polyndrom_len << ' ';
    }
    std::cout << '\n';
    return 0;
}
