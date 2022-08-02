#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count_1 = 0;
    while (n > 0)
    {
        if (n%2 != 0)
        {
            count_1 ++;
        }
        n /= 2;
    }
    if (count_1 == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
