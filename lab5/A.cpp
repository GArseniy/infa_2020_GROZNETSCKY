#include <iostream>


using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    int A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    int shift_A[n];
    for (int i = 0; i < n; ++i)
        shift_A[i] = A[(i + m) % n];
    for (int i = 0; i < n; ++i)
        cout << shift_A[i] << " ";
    return 0;
}
