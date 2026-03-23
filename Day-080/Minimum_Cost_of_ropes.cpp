//https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code herevector<int>
        //min heap
        priority_queue<int , vector<int> , greater<int> > pq;
        for(auto i : arr){
            pq.push(i);
        }
        
        int cost = 0;
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int sum = a + b;
            cost += sum;
            pq.push(sum);
        }
        return cost;
    }
};
