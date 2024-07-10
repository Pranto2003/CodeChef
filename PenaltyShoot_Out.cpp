#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int maxTeamAScore = X + (5 - 3); // Team A can have maximum 2 more goals
        int maxTeamBScore = Y + (5 - 4); // Team B can have maximum 1 more goal

        if (maxTeamAScore >= Y && maxTeamBScore >= X)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
