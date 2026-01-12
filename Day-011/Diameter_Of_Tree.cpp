// https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1

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
    
    int op3 = height(root->left) + 1 + height(root->right);
    This is node-based formula, not edge-based
    Because:
    height(left) already counts edges
    height(right) already counts edges
    the path goes: left subtree (→) root (→) right subtree
    So number of edges is:
    css
    Copy code
    height(left) + height(right) + 2
    (Left to root = 1 edge, root to right = 1 edge)
};
*/

class Solution {
    /*int height(Node* root){
    if(root == NULL){
        return -1;
    }
    
    int left = height(root -> left);
    int right = height(root -> right);
    
    int ans = max(left , right) +1;
    return ans;
   }*/
   
   pair<int,int> diameterFast(Node* root){
       if(root == NULL){
           pair<int,int> p = make_pair(0,0);
           return p;
       }
       
       pair<int,int> left = diameterFast(root -> left);
       pair<int,int> right = diameterFast(root -> right);
       
       int op1 = left.first;
       int op2 = right.first;
       int op3 = left.second + right.second ;
       
        pair<int,int> ans;
        ans.first = max(op1 ,max(op2 ,op3));
        ans.second = max(left.second , right.second) + 1;
       return ans;
   }
  public:
  
    int diameter(Node* root) {
        // code here
        /*if(root == NULL){
            return -1;
        }
        
        int op1 = diameter(root -> left);
        int op2 = diameter(root -> right);
        int op3 = height(root -> left) + 2 + height(root -> right);
        
        int ans = max(op1 ,max(op2 ,op3));
        return ans;*/
        
        //optimised
        return diameterFast(root).first;
        
    }
};
