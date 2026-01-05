https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        stack<int> s;
        
        int half_size = q.size()/2;
        
        for(int i = 0 ; i < half_size ; i++){
            s.push(q.front());
            q.pop();
        }
        
       while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        
        for(int i = 0 ; i < half_size ; i++){
            q.push(q.front());
            q.pop();
        }
        
        for (int i = 0; i < half_size; i++) {
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty()){
            int val = s.top();
            s.pop();
            q.push(val);
            
            
            val = q.front();
            q.pop();
            q.push(val);
        }
    }
};
