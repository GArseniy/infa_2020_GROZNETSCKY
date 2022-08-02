#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int A[n];
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        sum += A[i];
    }
    int sred = sum / n;
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (A[i] > sred)
            ans += A[i];
    cout << ans;
    return 0;
}
