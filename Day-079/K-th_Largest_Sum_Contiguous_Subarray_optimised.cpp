//https://www.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1
//TC =  O(n2 log n)
//SC = O(k)

// User function Template for C++

class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        priority_queue<int , vector<int> , greater<int> > mini;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            int sum = 0 ; 
            for(int j = i ; j < n ; j++){
                sum += arr[j];
                if(mini.size() < k){
                    mini.push(sum);
                }
                else{
                    if(mini.top() < sum){
                        mini.pop();
                        mini.push(sum);
                    }
                }
                
            }
        }
        return mini.top();
    }
};
