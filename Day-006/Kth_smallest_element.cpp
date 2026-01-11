// https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

class Solution {
  public:
    
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int , vector<int>,greater<int>> min_k;
        
        for(int i = 0 ; i < arr.size(); i++){
            min_k.push(arr[i]);
        }
        
        for(int i = 0 ; i < k-1; i++){
            min_k.pop();
        }
        
        return min_k.top();
    }
};
