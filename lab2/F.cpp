#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int max_number = 0;
    while (true)
    {
        int n;
        cin >> n;
        if (n!=0)
        {
            if (n == max_number)
            {
                counter ++;
            }
            if (n > max_number)
            {
                counter = 1;
                max_number = n;
            }
        }
        else
        {
            break;
        }
    }
    cout << counter;
    return 0;
}
