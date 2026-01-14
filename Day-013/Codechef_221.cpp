https://www.codechef.com/START221D/problems/LMP2E

/*
Winter is Coming
Chef feels comfortable depending on the temperature and whether or not he is wearing jacket.

Chef feels comfortable without a jacket if and only if the temperature is greater than or equal to A.
Chef feels comfortable with a jacket if and only if the temperature is less than or equal to B.
It is guaranteed that A≤B
A≤B.
Chef is not wearing a jacket initially.
You are given the temperature Ti ​
for the next N days.
Chef can choose to wear or remove his jacket any number of times, but each time he puts on the jacket is counted as one action.

Find the minimum number of times Chef needs to wear a jacket so that he feel comfortable on all 
N days.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        bool jacket = false;   
        int cnt = 0;           

        int n, a, b;
        cin >> n >> a >> b;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] < a) {
                if (!jacket) {
                    jacket = true;
                    cnt++;
                }
            }
            else if (arr[i] > b) {
                jacket = false;    
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
