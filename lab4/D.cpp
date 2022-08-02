#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int current;
    int max_n = 0, min_n = 1000000000;
    for (int i = 0; i < n; ++i)
    {
        cin >> current;
        max_n = max(max_n, current);
        min_n = min(min_n, current);
    }
    cout << (max_n + 1 - min_n - n);
    return 0;
}
