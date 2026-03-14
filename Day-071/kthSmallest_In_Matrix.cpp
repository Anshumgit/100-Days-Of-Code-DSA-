// https://www.geeksforgeeks.org/problems/kth-element-in-matrix/1
class Solution {
  public:
  int count(vector<vector<int>> &mat, int val){
      int c = 0 , lb , n = mat.size();
      for(int i = 0 ; i < n ; i++){
         lb = upper_bound(mat[i].begin() ,mat[i].end(), val )-mat[i].begin();
         c += lb;
      }
      return c;
  }
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int n = mat.size();
        
        int low = mat[0][0];
        int high = mat[n-1][n-1];
        
        while(low < high){
            int mid = low + (high - low)/2;
            int c = count(mat , mid);
            if(c < k ){
                low = mid +1;
            }
            else{
                high = mid;
            }
            
        }
        return low;
    }
};
