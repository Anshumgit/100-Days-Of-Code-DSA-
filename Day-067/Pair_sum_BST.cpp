// https://www.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1

/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
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
    
    bool findTarget(Node *root, int target) {
        // your code here.
        vector<int> inorderVal;
        //sort inorder or stored
        inorder(root , inorderVal);
        
        //used 2 pointer approach for O(n)
        int i = 0 , j = inorderVal.size() - 1;
        while(i < j){
            int sum = inorderVal[i] + inorderVal[j];
            if(sum == target)
                return true;
            
            if(sum < target){
                i++;
            }
            else if (sum > target){
                j--;
            }
            
        }
        return false;
    }
};
