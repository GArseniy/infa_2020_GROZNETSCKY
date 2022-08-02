#include <iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin >> x >> y;
        if ((x == 0) or (y == 0))
            continue;
        else if ((x > 0) and (y > 0))
            c1 ++;
        else if ((x < 0) and (y > 0))
            c2 ++;
        else if ((x < 0) and (y < 0))
            c3 ++;
        else if ((x > 0) and (y < 0))
            c4 ++;
        else
            cout << "What?";
    }
    int max_c;
    int max_c_1 = max(c1, c2);
    int max_c_2 = max(c3, c4);
    max_c = max(max_c_1, max_c_2);
    int answer;
    if (c4 == max_c)
        answer = 4;
    if (c3 == max_c)
        answer = 3;
    if (c2 == max_c)
        answer = 2;
    if (c1 == max_c)
        answer = 1;
    cout << answer << " " << max_c;
}
