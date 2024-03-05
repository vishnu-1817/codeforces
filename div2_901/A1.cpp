#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxTimeUntilExplosion(int a, int b, int n, vector<int>& x) {
    int maxTime = 0;
    for (int i = 0; i < n; ++i) {
        if (b <= a) {
            maxTime = max(maxTime, (a - b) / x[i]);
        } else {
            maxTime = max(maxTime, 0);
        }
        b = min(b + x[i], a);
    }
    return maxTime;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        int maxTime = maxTimeUntilExplosion(a, b, n, x);
        cout << maxTime << endl;
    }

    return 0;
}
