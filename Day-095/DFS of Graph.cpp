//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
// TC = Linear
// SC = Linear
class Solution {
    void solve(int node ,unordered_map <int, bool >&visited , vector<vector<int>>& adj , vector<int>& components){
        components.push_back(node);
        visited[node] = true;
        
        // har connected node ke liye recursive call
        for(auto i : adj[node]){
            if(!visited[i]){
                solve(i , visited , adj , components);
            }
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        unordered_map <int , bool > visited;
        vector<int> ans;
        for(int i = 0 ; i < adj.size() ; i++){
            if(!visited[i]){
                solve(i , visited , adj , ans);   
            }
        }
       return ans;
    }
};
