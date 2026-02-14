//https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1
// TC = O(height);
// for skewed TC = O(n);
// SC = O(height);
/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        if(root == NULL){
            return false;
        }
        if(root -> data == key){
            return true;
        }
        if(root -> data > key){
            search(root -> left , key);
        }
        else{
            search(root -> right , key);
        }
    }
};
