#include <iostream>
#include <cmath>


using namespace std;


bool is_prime(int n)
{
    if (n <= 1)
        return 0;
    int sqrt_n = int(pow(n, 0.5)) + 1;
    for (int i = 2; i < sqrt_n; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}


int main()
{
    int n;
    cin >> n;
    cout << is_prime(n);
    return 0;
}
