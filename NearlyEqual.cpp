#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;


int hammingDistance(const string &s1, const string &s2) {
    int distance = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            distance++;
        }
    }
    return distance;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string A, B;
        cin >> A >> B;

        int minHammingDistance = INT_MAX;

      
        for (int i = 0; i <= N - M; i++) {
            string subA = A.substr(i, M);
            int currentDistance = hammingDistance(subA, B);
            if (currentDistance < minHammingDistance) {
                minHammingDistance = currentDistance;
            }
        }

        cout << minHammingDistance << endl;
    }

    return 0;
}
