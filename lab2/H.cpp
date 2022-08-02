#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    int n;
    cin >> n;
    bool flag;
    while (n != 1)
    {
        flag = false;
        for (int i = 2; i < pow(n, 0.5) + 1; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                cout << i << endl;
                flag = true;
                break;
            }
        }
        if (not flag)
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}
