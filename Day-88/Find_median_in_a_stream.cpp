//https://www.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1
// TC = O(N log N)
class Solution {
  public:
  
    int signum(int a , int b){
        if(a == b){
            return 0;
        }
        else if(a > b){
            return 1;
        }
        else{
            return -1;
        }
    }
    
    void call_median(int element,priority_queue<int>& maxi , priority_queue<int , vector<int> , 
    greater<int> >& mini , double& median){
        switch(signum(maxi.size() , mini.size())){
            case 0:
                if(element > median){
                    mini.push(element);
                    median = mini.top();
                }
                else{
                    maxi.push(element);
                    median = maxi.top();
                }
                break;
                
            case 1:
                if(element > median){
                    mini.push(element);
                    median = (mini.top() + maxi.top())/2.0;
                }
                else{
                    mini.push(maxi.top());
                    maxi.pop();
                    maxi.push(element);
                    median = (mini.top() + maxi.top())/2.0;
                }
                break;
                
            case -1:
                if(element > median){
                    maxi.push(mini.top());
                    mini.pop();
                    mini.push(element);
                    median = (mini.top() + maxi.top())/2.0;
                }
                else{
                    maxi.push(element);
                    median = (mini.top() + maxi.top())/2.0;
                }
        }
        
    }
  
    vector<double> getMedian(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<double> ans;
        priority_queue<int> maxheap;
        priority_queue<int , vector<int> , greater<int> > minheap;
        double median = 0;
        
        for(int i = 0 ; i < n ; i++){
            call_median(arr[i], maxheap , minheap , median);
            ans.push_back(median);
        }
        return ans;
    }
};
