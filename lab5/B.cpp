#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    int reverse_A[n];
    for (int i = 0; i < n; ++i)
        reverse_A[i] = A[n - i - 1];
    for (int i = 0; i < n; ++i)
        cout << reverse_A[i] << ' ';
    cout << endl;
    return 0;
}
