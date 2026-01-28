// https://www.codechef.com/START223D/problems/CASHBACK
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x ;
    cin >> x;
    if(x >=200){
        cout << x - 50;
    }
    else{
        cout << x;
    }
    return 0;
}
