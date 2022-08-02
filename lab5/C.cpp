#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    int smooth_A[n];
    for (int i = 0; i < n; ++i)
        smooth_A[i] = (A[(n + i - 1) % n] + A[(n + i) % n] + A[(n + i + 1) % n]) / 3;
    for (int i = 0; i < n; ++i)
        cout << smooth_A[i] << ' ';
    cout << endl;
    return 0;
}
