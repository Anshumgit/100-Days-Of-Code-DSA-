// https://www.codechef.com/START223D/problems/ADD1234

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int pairs13 = min(x, z); // (1,3) pairs
        int pairs22 = y / 2;     // (2,2) pairs

        cout << pairs13 + pairs22 << endl;
    }
    return 0;
}
