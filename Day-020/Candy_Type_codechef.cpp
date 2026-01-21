// https://www.codechef.com/START222D/problems/CANDYTYPE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr(n);
        vector<int> freq(n+1 , 0);
        
        for(int i = 0 ; i < arr.size() ;i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        int maxFreq = 0;
        int idx = 1;
        
        for(int i = 1 ; i < freq.size() ; i++){
            if(freq[i] > maxFreq){
                maxFreq = freq[i];
                idx = i;
            }
        }
        cout << idx << endl;
    }
    return 0;
}
