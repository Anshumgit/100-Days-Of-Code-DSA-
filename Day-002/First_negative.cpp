// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        deque<int> dq;
        vector<int> ans;
        // store the answer of the 1st window in the dq
        for(int i = 0 ; i < k ; i++){
            if(arr[i] < 0){
                dq.push_back(i);
            }
        }
        
        //ans store
        if(dq.size() > 0 ){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        for(int i = k ; i < n ; i++){
            //removal
            if(!dq.empty() && i - dq.front() >= k){ //i - dq.front() for the cheking the element is in the window or not if it is ot it will pop the element 
                dq.pop_front();
            }
            
            //addition
            if(arr[i] < 0){
                dq.push_back(i);
            }
            
            //ans store
            if(dq.size() > 0 ){
                ans.push_back(arr[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
            
        }
        return ans;
    }
};
   
};
