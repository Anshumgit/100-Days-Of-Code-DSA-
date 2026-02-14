//https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1
// TC = O(Height);
// SC = O(1);
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
        Node* temp = root;
        while(temp != NULL){
            if(temp -> data == key){
                return true;
            }
            if(temp -> data > key){
                temp = temp -> left;
            }
            else{
                temp = temp -> right;
            }
            
        }
        return false;
    }
};
