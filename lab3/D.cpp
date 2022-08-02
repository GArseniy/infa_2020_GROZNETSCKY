#include <iostream>
#include <cmath>


using namespace std;


bool is_prime(int n)
{
    int c = int(pow(n, 0.5)) + 1;
    for(int i = 2; i < c; ++i)
    {
        if (n % i == 0)
        return false;
    }
    return true;
}


int main()
{
    int n;
    cin >> n;
    int counter = 0;
    int i = 1;
    while (counter < n)
    {
        i++;
        if (is_prime(i))
            counter++;
    }
    cout << i;
    return 0;
}
