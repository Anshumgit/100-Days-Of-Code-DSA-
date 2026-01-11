// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int maxidx = 0;
        int lastidx = 0;
        int jump =0;
        int n = arr.size();
        for(int i = 0 ; i < n-1 ; i++){
            maxidx = max(maxidx , i + arr[i]);
            
            if(i == lastidx){
                lastidx = maxidx;
                jump++;
            }
            
        }
        if(lastidx >= n-1){
            return jump;
        }
        return -1;
    }
};
