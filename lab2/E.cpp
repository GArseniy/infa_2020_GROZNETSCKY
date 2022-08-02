#include <iostream>

using namespace std;

int main()
{
    int answer = 0;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        if (n%2 == 0)
        {
            answer = max(n, answer);
        }
    }
    cout << answer;
    return 0;
}
