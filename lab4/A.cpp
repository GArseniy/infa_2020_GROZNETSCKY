#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_n = 0, pred_max_n = 0, min_n = 1000001, pred_min_n = 1000001;
    for (int i = 0; i < n; ++i)
    {
        int number;
        cin >> number;
        if (number > max_n)
        {
            pred_max_n = max_n;
            max_n = number;
        }
        else if (number > pred_max_n)
        {
            pred_max_n = number;
        }
        if (number < min_n)
        {
            pred_min_n = min_n;
            min_n = number;
        }
        else if (number < pred_min_n)
        {
            pred_min_n = number;
        }
    }
    cout << pred_min_n + min_n << " " << pred_max_n + max_n;
    return 0;
}
