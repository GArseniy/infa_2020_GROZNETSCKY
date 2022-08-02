#include <iostream>
#include <string>


using namespace std;


string translate(int n)
{
    string s = "";
    for (int i = 0; i < (n / 10); ++i)
        s += '<';
    for (int i = 0; i < (n % 10); ++i)
        s += 'v';
    return s;
}


int main()
{
    int n;
    cin >> n;
    string answer = "";
    while (true)
    {
        answer = translate(n%60) + answer;
        if (n / 60 > 0)
        {
                answer = '.' + answer;
                n /= 60;
        }
        else
            break;
    }
    cout << answer;
    return 0;
}
