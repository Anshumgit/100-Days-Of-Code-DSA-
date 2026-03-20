//https://leetcode.com/problems/kth-largest-element-in-an-array/
//tc = O(n log n)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int> , greater<int> > pq;
        int n = nums.size();
        for(int i = 0 ; i < k ; i++){
            pq.push(nums[i]);
        }
        for(int i = k ; i < n ; i++){
            if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        int ans = pq.top();
        return ans;
    }
};


// int n = nums.size();
//         int s =0 , e =n-1;
//         while(s < e){
//             if(nums[s] > nums[e] ){
//                 swap(nums[s],nums[e]);
//             }
//         }
        
//         for(int i =0 ; i < nums.size() ; i++){
//             if(nums[i] == (k-1)) return nums[i];
//         }
//         return 0;
