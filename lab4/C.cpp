#include <iostream>


using namespace std;


void primes_from_2_to_n(int* p, int n)
// The Sieve of Eratosthenes
{
    bool is_prime[n];
    for (int i = 0; i < n; ++i)
        is_prime[i] = 1;
    is_prime[0] = 0;
    is_prime[1] = 0;
    int j;
    for (int i = 2; i < n; ++i)
    {
        if (is_prime[i])
        {
            j = i*i;
            while (j < n)
            {
                is_prime[j] = 0;
                j += i;
            }
        }
    }
    int k = 0;
    for (int i = 2; i < n; ++i)
    {
        if (is_prime[i])
        {
            p[k] = i;
            k++;
        }
    }
    return;
}


int main()
{
    int n;
    cin >> n;
    int p[n+1];
    for (int i = 0; i < n+1; ++i)
        p[i] = 0;
    primes_from_2_to_n(p, n+1);
    int i = 0;
    while (p[i] != 0)
    {
        cout << p[i] << ' ';
        i++;
    }
    return 0;
}
