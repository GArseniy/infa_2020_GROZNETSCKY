#include <iostream>


using namespace std;


int do_some_awesome_work(int* a, int* b);


int main()
{
    int a, b;
    cin >> a >> b;
    int result = do_some_awesome_work(&a, &b);
    cout << result;
    return 0;
}
