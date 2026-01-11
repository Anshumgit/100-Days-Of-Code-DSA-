// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(q.size() < k ){
            return q;
        }
        
        stack<int> s;
        
        //step 1: fetch from the queue and put them to the stack 
        for(int i = 0 ; i < k ; i++){
            int num = q.front();
            s.push(num);
            q.pop();
        }
        
        //step 2: fetch from stack and put them to the stack
        while(!s.empty()){
            int num = s.top();
            s.pop();
            q.push(num);
        }
        
        //step 3: fetch n-k element from the queue
        int t = q.size() - k;
        while(t--){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};
