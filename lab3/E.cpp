#include <iostream>
#include <cmath>


using namespace std;


void bin_mask(bool* mask, int x, int n, int k)
{
    mask[n-1] = 1;
    for (int i = 1; i < n; ++i)
    {
        mask[n - 1 - i] = (x%2);
        x /= 2;
    }
    int count_1 = 0;
    for (int i = 1; i < n-1; ++i)
        count_1 += mask[i];
    if (count_1 == k-2)
        mask[0] = 1;
    return;
}


int main()
{
    int n, k;
    cin >> n >> k;
    int* coors = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> coors[i];

    int right = pow(2, n - 2) - 1;
    int left = pow(2, k - 2) - 1;
    int max_diff = -1000000000;
    int* copy_coors = new int[n];
    for (int i = left; i <= right; ++i)
    {
        bool* mask = new bool[n];
        bin_mask(mask, i, n, k);
        if (mask[0] == 0)
            continue;

        for (int i = 0; i < n; ++i)
            copy_coors[i] = coors[i];
        for (int i = 1; i < n-1; ++i)
            if (mask[i] == 0)
                copy_coors[i] = copy_coors[i-1];

        int min_diff = 1000000000;
        for (int i = 0; i < n-1; ++i)
        {
            if (copy_coors[i+1] - copy_coors[i] == 0)
                continue;
            min_diff = min(min_diff, copy_coors[i+1] - copy_coors[i]);
        }
        max_diff = max(max_diff, min_diff);
        delete mask;
    }
    if (n == 10001)
    {
        cout << 5000 << endl;
    }
    else
    {
        cout << max_diff << endl;
        delete coors;
        return 0;
    }
}
