//https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1
// TC = O(n);
// SC = O(H);

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
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        if(root == NULL){
            return NULL;
        }
        if(root -> data < n1 -> data && root -> data < n2 -> data){
            return LCA(root -> right , n1 , n2);
        }
        if(root -> data > n1 -> data && root -> data > n2 -> data){
            return LCA(root -> left , n1 , n2);
        }
        
        return root;
        
        
    }
};



// while(root != NULL){
//             if(root -> data < n1-> data && root -> data < n2->data){
//                 root = root -> right;
//             }
//             else if(root -> data > n1-> data && root -> data > n2->data){
//                 root = root -> left;
//             }
//             else 
//             return root;
//         }
