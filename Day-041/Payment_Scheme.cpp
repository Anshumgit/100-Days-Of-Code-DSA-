// http://codechef.com/START225D/problems/PAYSC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin >> x;
    int cal =  100 + 4 * x;
    int option1 = 100 + 4 * x;
    int option2 = 300;

    cout << min(option1, option2);
}
