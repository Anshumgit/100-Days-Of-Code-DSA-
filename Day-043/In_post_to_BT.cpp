/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void createmapping(vector<int> in ,map<int , int> &nodeToIndex ){
        for(int i = 0 ; i < in.size() ; i++){
            nodeToIndex[in[i]] = i ;
        }
    }
  Node* solve(vector<int> &in , vector<int> &post , int &index ,int inorderStart ,int  inorderEnd , int n, map<int,int> &nodeToIndex){
        if(index < 0 || inorderStart > inorderEnd){
            return NULL;
        }
        
        int element = post[index--];
        Node* root = new Node(element);
         
        // int position = find_position(in , element );
        int position = nodeToIndex[element];
        root -> right = solve(in, post, index , position + 1 , inorderEnd , n,nodeToIndex );
        root -> left = solve(in, post, index , inorderStart , position - 1 , n,nodeToIndex);
        
        return root;
    } 
    
    
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
        map<int , int> nodeToIndex;
        int n = inorder.size();
        int postorderindex = n-1;
        createmapping(inorder, nodeToIndex);
        
        Node* ans = solve(inorder , postorder , postorderindex , 0 , n-1 , n , nodeToIndex );
        return ans;
    }
};
