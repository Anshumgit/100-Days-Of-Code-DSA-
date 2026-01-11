// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

class Solution {
  public:
  //Kadane Algorithm
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int max_sum = INT_MIN ;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + arr[i];
            max_sum = max(max_sum , sum);
            if(sum < 0){
                sum =0 ;
            }
        }
        return max_sum;
    }
};
