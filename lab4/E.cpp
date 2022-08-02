#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int amount_of_each_types_of_stones[n];
    for (int i = 0; i < n; i++)
        amount_of_each_types_of_stones[i] = 0;
    int current;
    for (int i = 0; i < n; ++i)
    {
        cin >> current;
        amount_of_each_types_of_stones[current] ++;
    }
    int count_more_2 = 0;
    for (int i = 0; i<n; ++i)
    {
        if (amount_of_each_types_of_stones[i] > 0)
            count_more_2 += amount_of_each_types_of_stones[i] - 1;
    }
    if (count_more_2 <= 1)
        cout << 1;
    else
        cout << 0;
    return 0;
}
