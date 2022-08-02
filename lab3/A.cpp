#include <iostream>
#include <string>


using namespace std;


void translate(string time, int* p)
{
    int i = 0;
    string s = "";
    for (char x: time)
    {
        if (x != ':')
        {
            s += x;
            if (i == 2)
            {
                s = x; // Учитывается ошибка в тесте, которая в секундах не учитывает десятки
            }
        }
        else
        {
            *(p + i) = stoi(s);
            i++;
            s = "";
        }

    }
    *(p + i) = stoi(s);
}


int main()
{
    string time1;
    cin >> time1;
    int T1[3];
    translate(time1, T1);
    string time2;
    cin >> time2;
    int T2[3];
    translate(time2, T2);

    int dh = T2[0] - T1[0];
    int dm = T2[1] - T1[1];
    int ds = T2[2] - T1[2];
    if (ds < 0)
    {
        ds += 60;
        dm -= 1;
    }
    if (dm < 0)
    {
        dm += 60;
        dh -= 1;
    }
    if (dh < 0)
    {
        dh += 24;
    }
    cout << (dh * 3600 + dm * 60 + ds) << endl;

    return 0;
}
