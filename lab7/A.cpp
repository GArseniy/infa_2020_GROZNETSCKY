#include <iostream>


int main(){
    int a, b, c, d, x;
    std::cin >> a >> b >> c >> d >> x;
    int mark;
    if (a + x == b and c * x == d){
        mark = 5;
    }
    else if (a + x == b or c * x == d){
        mark = 4;
    }
    else if (x == 1024){
        mark = 3;
    }
    else{
        mark = 2;
    }
    std::cout << mark << std::endl;
    return 0;
}
