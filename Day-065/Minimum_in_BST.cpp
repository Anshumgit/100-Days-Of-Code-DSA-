//https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int minValue(Node* root) {
        // code here
        if(root == NULL){
            return -1;
        }
        int ans;
        while(root != NULL){
            ans = root->data;
            root = root -> left;
        }
        return ans;
    }
};
