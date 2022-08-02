#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void my_personal_swap(int* a, int* b);

int main() {
    int a, b;
    cin >> a >> b;
    my_personal_swap(&a, &b);
    cout << a << " " << b << endl;
    my_personal_swap(&a, NULL);
    my_personal_swap(NULL, &b);
    my_personal_swap(NULL, NULL);
    return 0;
}


void my_personal_swap(int* a, int* b)
{
    if (a == NULL or b == NULL)
        return;
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}
