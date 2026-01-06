// https://www.geeksforgeeks.org/problems/implement-k-stacks-in-an-array/1

class kStacks {

    // main array to store elements
    int *arr;
    int *top , *next;
    
    int n , size;
    int freespot;
  public:
    kStacks(int n, int k) {
        // initialize data structures for k stacks
        size = n;
        this -> n = k;
        arr = new int[size];
        top = new int[n];
        next = new int[size];
        
        for(int i = 0 ; i < n ; i++){
            top[i] = -1;
        }
        
        for(int i = 0 ; i < size ; i++){
            next[i] = i+1;
        }
        next[size-1] = -1;
        
        freespot = 0;
    }

    void push(int x, int i) {
        if(freespot == -1){
            return;
        }
        // push element x into stack i
        int idx = freespot;
        arr[idx] = x;
        freespot = next[idx];
        next[idx] = top[i];
        top[i] = idx;
    }

    int pop(int i) {
        if(top[i] == -1){
            return -1;
        }
        // pop element from stack i
        int idx = top[i];
        top[i] = next[idx];
        next[idx] = freespot;
        freespot = idx;
        return arr[idx];
    }
};\
