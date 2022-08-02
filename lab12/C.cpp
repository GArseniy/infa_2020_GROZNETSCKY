#include <iostream>


#include <vector>
class MinStack {
    public:

    int index_of_top = -1;
    std::vector<int> stack_vec;

    public:

    MinStack() {}
    ~MinStack() {}
    void print() {
        for (int i=0; i <= index_of_top; ++i){
            std::cout << stack_vec[i] << std::endl;
        }
    }
    void push(int x) {
        stack_vec.push_back(x);
        ++index_of_top;
    }
    void pop() {
        stack_vec.pop_back();
        --index_of_top;
    }
    int top() {
        return stack_vec[index_of_top];
    }
    int getMin() {
        int min_ = this->top();
        for (int i=0; i < index_of_top; ++i){
            min_ = std::min(min_, stack_vec[i]);
        }
        return min_;
    }
};


int main(){
    MinStack *mstack = new MinStack;
    return 0;
}
