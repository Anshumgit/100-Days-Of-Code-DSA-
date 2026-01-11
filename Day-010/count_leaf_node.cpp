//https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
    void inorder(Node* root , int &cnt){
        if(root == NULL) {
            return;
        }
        inorder(root -> left,cnt);
        
        if(root -> left == NULL && root -> right == NULL){
            cnt++;
        }
        
        inorder(root -> right,cnt);
    }
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int cnt = 0 ;
        inorder(root , cnt);
        return cnt;
    }
};
