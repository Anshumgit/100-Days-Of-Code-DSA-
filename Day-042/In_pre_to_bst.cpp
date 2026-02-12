//https://www.geeksforgeeks.org/problems/construct-tree-1/1

/*
class Node {
public:
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
  
    int find_position(vector<int> in , int element ){
        for(int i = 0 ; i < in.size() ; i++){
            if(in[i] == element){
                return i;
            }   
        }
        return -1;
    }
    Node* solve(vector<int> &in , vector<int> &pre , int &index ,int inorderStart ,int  inorderEnd , int n){
        if(index >= n || inorderStart > inorderEnd){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
         
        int position = find_position(in , element );
        root -> left = solve(in, pre, index , inorderStart , position - 1 , n);
        root -> right = solve(in, pre, index , position + 1 , inorderEnd , n );
        return root;
    } 
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        int preorderindex = 0;
        int n = inorder.size();
        Node* ans = solve(inorder , preorder , preorderindex , 0 , n-1, n);
        return ans;
    }
};
