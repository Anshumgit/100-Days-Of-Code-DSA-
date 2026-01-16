//https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    void boundaryLeft(Node *root , vector<int> &ans){
        if((root == NULL) || (root -> left == NULL && root -> right == NULL)){
            return;
        }
        ans.push_back(root -> data);
        if(root -> left){
            boundaryLeft(root -> left , ans);
        }
        else{
            boundaryLeft(root -> right , ans);
        }
        
    }
    
    void boundaryLeaf(Node *root , vector<int> &ans){
        if(root == NULL){
            return;
        }
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(root -> data);
        }
        boundaryLeaf(root -> left , ans);
        boundaryLeaf(root -> right , ans);
        
    }
    
    void boundaryRight(Node *root , vector<int> &ans){
        if((root == NULL) || (root -> left == NULL && root -> right == NULL)){
            return;
        }
        
        if(root -> right){
            boundaryRight(root -> right , ans);
        }
        else{
            boundaryRight(root -> left , ans);
        }
        ans.push_back(root -> data);
        
    }
    
    
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        ans.push_back(root -> data);
        
        boundaryLeft(root -> left,ans);
        boundaryLeaf(root -> left ,ans);
        boundaryLeaf(root -> right ,ans);
        boundaryRight(root -> right, ans);
        return ans;
    }
};
