// https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        map< int , map<int , vector<int> > > nodes;
        queue< pair <Node* , pair<int,int> > > q;
        vector<vector<int>> ans;
        
        if(root == NULL){
            return ans;
        }
        
        q.push(make_pair(root , make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node* , pair<int,int> > temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int HD = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[HD][lvl].push_back(frontNode -> data);
            
            if(frontNode -> left){
                q.push(make_pair(frontNode -> left , make_pair(HD - 1, lvl + 1)));
            }
            if(frontNode -> right){
                q.push(make_pair(frontNode -> right , make_pair(HD + 1, lvl + 1)));
            }
        }
        
        for(auto i :nodes){
            vector<int> col;
            for(auto j : i.second){
                for(auto k : j.second){
                    col.push_back(k);
                }
            }
            ans.push_back(col);
        }
        return ans;
    }
};
