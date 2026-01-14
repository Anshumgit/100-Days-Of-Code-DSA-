// https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1
// TC = O(n);
// SC = O(n);
/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int> result;
        if(root == NULL){
            return result;
        }
        queue<Node*> q;
        
        bool leftTOright = true;
        
        q.push(root);
        
        
        while(!q.empty()){
            int size = q.size();
            vector<int> ans(size);
            
            for(int i = 0 ; i < size ; i++){
                Node* frontNode = q.front();
                q.pop();
                
                // normal insertion or reverse
                int idx = leftTOright ? i : size - i - 1;
                ans[idx] = frontNode -> data;
                
                if(frontNode -> left){
                    q.push(frontNode -> left);
                }
                if(frontNode -> right){
                    q.push(frontNode -> right);
                }
            
            }   
             
            leftTOright = !leftTOright;
            for(auto i : ans) {
                result.push_back(i);
            }
            
        }

       return result;
    }
};
