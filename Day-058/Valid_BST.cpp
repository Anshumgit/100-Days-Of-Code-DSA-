// https://www.geeksforgeeks.org/problems/check-for-bst/1

// SC= O(n);
// TC = O(H);

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool valid(Node* root , int min , int max){
        if(root == NULL){
            return true;
        }
        if(root-> data >= min && root -> data <= max){
            bool left = valid(root -> left , min , root->data);
            bool right = valid(root -> right , root->data , max);
            return left && right;
        }
        else{
            return false;
        }
        
    }
    bool isBST(Node* root) {
        // code here
        return valid(root , INT_MIN , INT_MAX);
    }
};
