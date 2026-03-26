//https://www.naukri.com/code360/problems/smallest-range-from-k-sorted-list_1069356?leftPanelTabValue=SUBMISSION

#include<limits.h>
#include<queue>
#include<iostream>
class node{
    public:
    int data;
    int row;
    int col;
    node(int data , int row , int col){
        this -> data = data;
        this -> col = col;
        this -> row = row;
    }
};

class compare{
    public:
    bool operator()(node* a , node* b){
        return a-> data > b-> data;
    }
};

int kSorted(vector<vector<int>> &a, int k, int n) {
    // Write your code here.
    int mini = INT_MAX , maxi = INT_MIN;
    priority_queue<node* , vector<node*> , compare > minHeap;
    // step 1: step1 creating min heap for starting element of each list and tracking min and max value
    for(int i = 0 ; i < k ; i++){
        int element = a[i][0];
        mini = min(mini , element);
        maxi = max(maxi , element);
        minHeap.push(new node(element , i , 0));
    }

    int start = mini , end = maxi;

    //process range
    while(!minHeap.empty()){
        node* temp = minHeap.top();
        minHeap.pop();

        // mini fetch
        mini = temp -> data;
        //range or answer updation
        if(maxi - mini < end - start){
            start = mini;
            end = maxi;
        }

        // next element exist
        if(temp -> col + 1 < n){
            maxi = max(maxi, a[temp -> row][temp->col+1]);
            minHeap.push(new node(a[temp -> row][temp->col + 1] , temp -> row , temp->col+1));
        }
        // next element does not exist
        else{
            break;
        }
    }

    // returning the difference of range value
    return end - start + 1;
}
