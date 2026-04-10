//https://www.naukri.com/code360/problems/bfs-in-graph_973002?leftPanelTabValue=SUBMISSION
// TC = O(Verteces + Edges)
// SC = O(Verteces + Edges)

#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;

void bfs(vector<vector<int>> &adj , unordered_map<int , bool > &visited , vector<int>&ans , int node){
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);
        for(auto i : adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]= 1;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    unordered_map<int , bool > visited;
   
    // travers all components of the graph
    bfs( adj , visited , ans , 0);
    return ans;
}
