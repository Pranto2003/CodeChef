#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int x)
{
    return (x & (x - 1)) == 0;
}

int main()
{
    int T;
    cin >> T;

    vector<int> results(T);
    for (int i = 0; i < T; ++i)
    {
        int X;
        cin >> X;

        if (isPowerOfTwo(X))
        {
            results[i] = 0;
        }
        else
        {
            // Find the largest power of 2 less than X
            int largestPowerOf2 = pow(2, floor(log2(X)));
            int smallerSlices = 2 * (X - largestPowerOf2);
            results[i] = smallerSlices;
        }
    }

    for (const int &result : results)
    {
        cout << result << "\n";
    }

    return 0;
}
