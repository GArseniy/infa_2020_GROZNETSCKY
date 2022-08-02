#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    while (a != 0)
    {
        int tmp = a;
        a = b%a;
        b = tmp;
    }
    cout << b;
    return 0;
}
