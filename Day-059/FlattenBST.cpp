//https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1
// Time Complexity: O(n)
// Auxiliary Space: O(n)
/*
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
   void inorder(Node *root , vector<int>& in){
        if(root == NULL){
            return ;
        }
        inorder(root -> left , in);
        in.push_back(root->data);
        inorder(root -> right , in);
        
    }
    Node *flattenBST(Node *root) {
        // code here
        vector<int> inorderVal;
        //sort inorder or stored
        inorder(root , inorderVal);
        
        Node* newRoot = new Node(inorderVal[0]);
        Node* curr = newRoot;
        
        //2nd step
        int n = inorderVal.size();
        for(int i = 1 ; i < n ; i++){
            Node* temp = new Node(inorderVal[i]);
            
            curr -> left = NULL;
            curr -> right = temp;
            curr = temp;
        }
        
        //step 3
        curr -> left = NULL;
        curr -> right = NULL;
        
        return newRoot;
    }
};
