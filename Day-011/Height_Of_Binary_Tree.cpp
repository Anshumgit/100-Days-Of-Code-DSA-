// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1


//T.C = O(n);
//S.C = O(height);
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
    int height(Node* root) {
        // code here
        if(root == NULL){
            return -1;
        }
        int left = height(root -> left);
        int right = height(root -> right);
        
        int ans = max(left,right) +1;
        return ans;
    }
};
