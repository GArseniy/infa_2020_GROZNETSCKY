#include <iostream>

using namespace std;

int main()
{
    bool flag = true;
    int counter = 0;
    while (flag)
    {
        int n;
        cin >> n;
        if (n!=0)
        {
            if (n%2 == 0)
            {
                counter ++;
            }
        }
        else
        {
            flag = false;
        }
    }
    cout << counter;
    return 0;
}
