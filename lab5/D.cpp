#include <iostream>


using namespace std;


void bubble_sort(int* p, int n)
{
    int bubble_index;
    int tmp;
    for (int i = 0; i < n; ++i)
    {
        bubble_index = 0;
        for (int j = 1; j < n - i; ++j)
        {
            if (p[bubble_index] > p[j])
            {
                tmp = p[j];
                p[j] = p[bubble_index];
                p[bubble_index] = tmp;
            }
            bubble_index = j;
        }
    }
    return;
}


int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    bubble_sort(A, n);
    for (int i = 0; i < n; ++i)
        cout << A[i] << ' ';
    cout << endl;
    return 0;
}
