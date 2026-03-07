// https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
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
    int solve(Node *root, int k , int &i,int n){
        if(root == NULL){
            return -1;
        }
        int left = solve(root -> left , k , i, n);
        if(left != -1){
            return left;
        }
        i++;
        if(n-i+1 == k){
            return root->data;
        }
        int right = solve(root -> right , k , i, n);
        
    } 
    int kthLargest(Node *root, int k) {
        // Your code here
        vector<int> inorderVal;
        //sort inorder or stored
        inorder(root , inorderVal);
        int i = 0;
        return solve(root , k , i,inorderVal.size());
    }
};
