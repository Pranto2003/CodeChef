#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t == 1)
    {
        cout << 4 << endl;
    }
    else
    {
        cout << 4 + (3 * (t - 1)) << endl;
    }

    return 0;
}