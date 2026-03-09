// https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1

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
    bool solve(Node* curr, int key){
        if(curr == NULL){
            return false;
        }
        if(key == curr -> data){
            return true;
        }
        else if( key > curr -> data){
            solve(curr -> right , key);
        }
        else if( key < curr -> data){
            solve(curr -> left , key);
        }
    }
    bool search(Node* root, int key) {
        // code here
        return solve(root , key);
    }
};
