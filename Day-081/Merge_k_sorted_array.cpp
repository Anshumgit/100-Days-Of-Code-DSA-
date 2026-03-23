//https://www.naukri.com/code360/problems/merge-k-sorted-arrays_975379
// tc - O(n*k log k)
// sc -O(n*k)

#include <bits/stdc++.h> 
using namespace std;

class node{
    public:
        int data;
        int i ;
        int j ;
        node(int data , int row , int col){
            this -> data = data;
            this -> i = row;
            this -> j = col;
        }
};

class compare{
  public:
    bool operator()(node* a , node* b){
        return a -> data > b -> data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<node* , vector<node*> , compare> minHeap;
        //Step1: saare arrays k first elements insert O(k log k)
        for(int i = 0 ; i < k ; i++){
            node* tmp = new node(kArrays[i][0] , i , 0);
            minHeap.push(tmp);
        }
        vector<int> ans;

        //Step 2- O(n*k - k)
        while(minHeap.size() > 0){
            node* tmp = minHeap.top();
            
            ans.push_back(tmp -> data);
            minHeap.pop();
            
            int i = tmp -> i;
            int j = tmp -> j;

            if(j+1 < kArrays[i].size()){
                node* next = new node(kArrays[i][j+1] , i , j+1);
                minHeap.push(next);
            }
        }
        return ans;
}
