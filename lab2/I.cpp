#include <iostream>
#include <string>


using namespace std;


int main()
{
    int sum = 0;
    while (true)
    {
        int v;
        string numbers;
        cin >> v >> numbers;
        if (numbers == "A999AA")
            break;
        if (v <= 60)
            continue;
        char a, b, c;
        a = numbers[1];
        b = numbers[2];
        c = numbers[3];
        if ((a == b) and (b == c))
            sum += 1000;
        else if ((a == b) or (b == c) or (a == c))
            sum += 500;
        else
            sum += 100;
    }
    cout << sum;
}
