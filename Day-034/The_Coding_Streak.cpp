// https://www.codechef.com/START224D/problems/STREAK
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n ,t;
	cin >> t;
	while(t--){
	    int maxi = 0;
	    int cnt = 0;
	    cin >> n;
	    int arr[n] ;
	    for(int i = 0 ; i < n ; i++){
	        cin >> arr[i];
	    }
	    for(int i = 0 ; i < n ; i++){
	        if(arr[i] > 0){
	            cnt++;
	            
	        }
	        else if(arr[i] == 0){
	            cnt = 0;
	        }
	        maxi = max(maxi , cnt);
	    }
	    cout << maxi << endl;
	  
	}
	

}
