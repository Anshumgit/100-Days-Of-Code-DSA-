//https://www.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1
// TC = O( n + m )
// User function Template for C++

class Solution {
  public:
    void heapify(vector<int> &arr, int n , int i){
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        
        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }
        if(largest != i){
            swap(arr[i] , arr[largest]);
            heapify(arr, n , largest);
        }
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        // step 1
        vector<int> ans;
        for(auto i : a){
            ans.push_back(i);
        }
        for(auto i : b){
            ans.push_back(i);
        }
        // step 2
        int ans_size = ans.size();
        for(int i = ans_size/2-1 ; i >= 0; i--){
            heapify(ans , ans_size , i);    
        }
        
        return ans;
        
    }
};
