#include <iostream>


using namespace std;


void some_signed_sort(int* p, int n)
{
    int pos_bubble_index, neg_bubble_index, first_pos_bubble_index, first_neg_bubble_index;
    for (int i = n-1; i >= 0; i--)
    {
        if (p[i] >= 0)
            first_pos_bubble_index = i;
        else
            first_neg_bubble_index = i;
    }
    for (int i = 0; i < n; ++i)
    {
        pos_bubble_index = first_pos_bubble_index;
        neg_bubble_index = first_neg_bubble_index;
        for (int j = 1; j < n - i; ++j)
        {
            if (p[j] >= 0)
            {
                if (p[pos_bubble_index] > p[j])
                {
                    int tmp = p[j];
                    p[j] = p[pos_bubble_index];
                    p[pos_bubble_index] = tmp;
                    for (int i = 0; i < n; ++i)
                        cout << p[i] << ' ';
                    cout << endl;
                }
                pos_bubble_index = j;
            }
            else
            {
                if (p[neg_bubble_index] < p[j])
                {
                    int tmp = p[j];
                    p[j] = p[neg_bubble_index];
                    p[neg_bubble_index] = tmp;
                    for (int i = 0; i < n; ++i)
                        cout << p[i] << ' ';
                    cout << endl;
                }
                neg_bubble_index = j;
            }
        }
    }
}


int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    some_signed_sort(A, n);
    return 0;
}
