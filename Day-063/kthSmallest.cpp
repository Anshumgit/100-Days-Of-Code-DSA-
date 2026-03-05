//https://www.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1

// TC = O(n)
// SC= O(H)
// Skewed SC = O(n)

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int k_small(Node* root , int k , int &i){
        if(root == NULL){
            return -1;
        }
    // L
        int left = k_small(root -> left , k , i);
        if(left != -1){
            return left;
        }
        
    // N
        i++;
        if(i == k){
            return root->data;
            
        }
    // R
        return k_small(root -> right , k , i);
        
    }
    int kthSmallest(Node *root, int k) {
        // code here
        int i = 0 ;
        return k_small(root , k , i);
    }
};
