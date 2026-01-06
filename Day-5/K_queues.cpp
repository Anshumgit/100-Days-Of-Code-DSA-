// https://www.geeksforgeeks.org/problems/implement-k-queues-in-a-single-array/1

class kQueues {
    int *arr;
    int *rear,*front , *next;
    
    int n , size;
    int freespot;

  public:
    kQueues(int n, int k) {
        // Initialize your data members
        size = n;
        this -> n = k;
        arr = new int[size];
        front = new int[n];
        rear = new int[n];
        next = new int[size];
        
        for(int i = 0 ; i < n ; i++){
            rear[i] = -1;
            front[i] = -1;
        }
        
        for(int i = 0 ; i < size ; i++){
            next[i] = i+1;
        }
        
        next[size-1] = -1;
        
        freespot = 0;
    }

    void enqueue(int x, int i) {
        // enqueue element x into queue i
        if(freespot == -1){
            return; 
        }
        int idx = freespot;
        freespot = next[idx];
        if(front[i] == -1){
            front[i] = idx;
        }
        else{
            next[rear[i]] = idx;
        }
        
        next[idx] = -1;
        rear[i] = idx;
        arr[idx] = x;
    }

    int dequeue(int i) {
        // dequeue element from queue i
        if(front[i] == -1){
            return -1;
        }
        
        int idx = front[i];
        front[i] = next[idx];
        
        if (front[i] == -1){
            rear[i] = -1;
        }
    
        next[idx] = freespot;
        freespot = idx;
        
        return arr[idx];
    }

    bool isEmpty(int i) {
        // check if queue i is empty
        return (front[i] == -1);
    }

    bool isFull() {
        // check if array is full
        return (freespot == -1);
    }
};
