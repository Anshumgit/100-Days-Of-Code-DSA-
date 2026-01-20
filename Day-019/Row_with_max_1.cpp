//  https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

// User function template for C++
class Solution {
  public:
  int lower_bound(vector<int> &arr, int n , int x){
      int low = 0;
      int high = n- 1;
      int ans = n;
      
      while(low <= high){
          int mid = low +(high - low) / 2;
          if(arr[mid] >= x){
              ans = mid;
              high = mid -1;
          }
          else{
              low = mid + 1;
          }
      }
      return ans;
      
  }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n= arr.size();
        int m = arr[0].size();
        
        int cnt_max= 0;
        int idx = -1 ;
        
        for(int i = 0 ; i < n ; i++){
            int cnt_one = m - lower_bound(arr[i] , m , 1);
            if(cnt_one > cnt_max){
                cnt_max = cnt_one ; 
                idx = i;
            }
        }
        return idx;
    }
};
