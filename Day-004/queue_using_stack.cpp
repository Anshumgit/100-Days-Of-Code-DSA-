// https://www.geeksforgeeks.org/problems/queue-using-stack/1

class myQueue {

  public:
  stack<int> s1;
  stack<int> s2;
    myQueue() {
        // Initialize your data members
    }

    void enqueue(int x) {
        // Implement enqueue operation
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void dequeue() {
        // Implement dequeue operation
        s1.pop();
    }

    int front() {
        // Implement front operation
        if(s1.empty()){
            return -1;
        }
        else{
            return s1.top();
        }
    }

    int size() {
        // Implement size operation
        return s1.size();
    }
};
