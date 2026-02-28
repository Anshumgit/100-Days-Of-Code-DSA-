// https://www.geeksforgeeks.org/problems/predecessor-and-successor/1
//TC = O(H);
//SC = O(1);
/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

Node* leftMax(Node* curr) { 
    if (curr == NULL) return NULL; 
    
    while (curr->right != NULL) {
        curr = curr->right; 
    }
    return curr;
}

Node* rightMin(Node* curr) {
    if (curr == NULL) return NULL;
    
    while (curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        
        Node* pre = NULL;
        Node* suc = NULL;
        Node* curr = root;
        while(curr != NULL){
            if(key > curr -> data){
                pre = curr;
                curr = curr -> right;
                
            }
            else if(key < curr->data){
                suc = curr;
                curr = curr -> left;
                
            }
            else{
                if(curr -> left ){
                    pre = leftMax(curr -> left );
                    
                }
                if(curr -> right ){
                    suc = rightMin(curr -> right );
                }
                break;
            }
        }

        return {pre , suc};
        
    }
};
