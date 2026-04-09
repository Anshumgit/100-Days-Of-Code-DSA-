//https://www.naukri.com/code360/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTabValue=SUBMISSION
//TC = O(N + E)
//SC = linear

#include<unordered_map>
#include<list>
#include<vector>

bool checkCycledfs(int node ,unordered_map<int ,bool > &visited, unordered_map<int ,bool > &dfsVisited,unordered_map<int ,list<int> > &adj ){
  visited[node] = true;
  dfsVisited[node] = true;

  for(auto neighbour : adj[node]){
    if(!visited[neighbour]){
      bool cycleDetected = checkCycledfs(neighbour , visited , dfsVisited , adj);
      if(cycleDetected){
        return true;
      }
    }
    else if(dfsVisited[neighbour]){
      return true;
    }
  }
  dfsVisited[node] = false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  // vector< vector<int> > adj;
  unordered_map<int ,list<int> > adj; 
  for(int i = 0; i < edges.size() ;i++){
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
  }

  unordered_map<int ,bool > visited;
  unordered_map<int ,bool > dfsVisited;
  for(int i = 0 ; i < n ; i++){
    if(!visited[i]){
      bool cycleFound = checkCycledfs(i ,visited,dfsVisited,adj );
      if(cycleFound){
        return true;
      }
    }
  }
  return false;
}
