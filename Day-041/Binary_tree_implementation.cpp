#include <iostream>
#include <stack>
#include<queue>
using namespace std;

// Node structure-
class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Binary Tree Class
class BT {
    node* root;

public:
    BT() {
        root = NULL;
    }

    // Insertion 
    void insertdata(node* &root, int data) {
        if (root == NULL) {
            root = new node(data);
            return;
        }
        if (data < root->data) {
            insertdata(root->left, data);
        } else {
            insertdata(root->right, data);
        }
    }

    void insert(int data) {
        insertdata(root, data);
    }

    // Recursive Traversals
    void inorder(node* root) {
        if (root == NULL) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void preorder(node* root) {
        if (root == NULL) return;
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(node* root) {
        if (root == NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    // calling Recursive functions
    void recursive_inorder() {
        cout << "Recursive InOrder: ";
        inorder(root);
        cout << endl;
    }

    void recursive_preorder() {
        cout << "Recursive PreOrder: ";
        preorder(root);
        cout << endl;
    }

    void recursive_postorder() {
        cout << "Recursive PostOrder: ";
        postorder(root);
        cout << endl;
    }

    //Non-Recursive Traversals
    
    void non_recursive_preorder() {
        if (root == NULL) return;
        stack<node*> s;
        s.push(root);

        cout << "Non-Recursive PreOrder: ";
        while (!s.empty()) {
            node* curr = s.top();
            s.pop();
            cout << curr->data << " ";

            // Push right first so left is on top
            if (curr->right){
                s.push(curr->right);
            }
            if (curr->left){
                s.push(curr->left);
            }
        }
        cout << endl;
    }

    void non_recursive_inorder() {
        if (root == NULL) return;
        stack<node*> s;
        node* curr = root;

        cout << "Non-Recursive InOrder: ";
        while (curr != NULL || !s.empty()) {
            while (curr != NULL) {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
        cout << endl;
    }

    // Iterative Postorder using Two Stacks
    void non_recursive_postorder() {
        if (root == NULL) return;
        stack<node*> s1, s2;
        s1.push(root);

        while (!s1.empty()) {
            node* curr = s1.top();
            s1.pop();
            s2.push(curr);

            if (curr->left) {
                s1.push(curr->left);
            }
            if (curr->right) {
                s1.push(curr->right);
            }
        }

        cout << "Non-Recursive PostOrder: ";
        while (!s2.empty()) {
            cout << s2.top()->data << " ";
            s2.pop();
        }
        cout << endl;
    }
    
    // Level order traversal
    void level_order_traversal(){
    	queue<node*> q;
    	q.push(root);
    	q.push(NULL);
    	
    	while(!q.empty()){
    		node* temp = q.front();
    		q.pop();
    		
    		if(temp == NULL){
    			cout << endl;
    			if(!q.empty()){
    				q.push(NULL);
				}
			}
			else{
				cout << temp -> data << " ";
				if(temp -> left){
					q.push(temp -> left);
				}
				if(temp -> right){
					q.push(temp -> right);
				}
			}
		}
	}
	

	// Search in the binary tree
	bool searchBST(node* root , int key){
		if(root== NULL){
			return false;
		}
		if(root -> data == key){ // key will decide where to go
			return true;
		}
		else if(root -> data > key){
			return searchBST(root -> left , key);
		}
		else{
			return searchBST(root -> right , key);
		}
	}
	
	bool search(int key){
		if(root == NULL){
			return false;
		}
		return searchBST(root , key);
	}
	
	node* minVal(node* root ){
		node* temp = root;
		while(temp -> left != NULL){
			temp = temp -> left;
		}
		return temp;
	}
	
	node* delete_node(node* root , int val){
		if(root == NULL){
			return root;
		}
		
		if(root -> data == val){
			//0 child
			if(root -> left == NULL && root -> right == NULL){
				delete root;
				return NULL;
			}
			// 1 child
			//left
			if(root -> left != NULL && root -> right == NULL){
				node* temp = root -> left;
				delete root ;
				return temp;
			}
			//right
			if(root -> left == NULL && root -> right != NULL){
				node* temp = root -> right;
				delete root;
				return temp;
			}
			//2 child
			if(root -> left != NULL && root -> right != NULL ){
				int mini = minVal(root -> right) -> data;
				root -> data = mini;
				root -> right = delete_node(root -> right,mini);
				return root;
			}
		}
		else if(root -> data > val){
			//go to left
			root -> left = delete_node(root -> left,val); 
			return root;
		}
		else{
			//go to right
			root -> right = delete_node(root -> right,val);
			return root;	
		}
	}
	node* Delete(int val){
		return delete_node(root , val);
	}
};

int main() {
    BT tree;
    int choice = 0; 

    while (choice != 11) {
        cout << "\n";
        cout << "Binary Search Tree Menu" << endl;
        cout << "1. Insert nodes" << endl;
        cout << "2. Recursive Preorder" << endl;
        cout << "3. Recursive Inorder" << endl;
        cout << "4. Recursive Postorder" << endl;
        cout << "5. Non-recursive Preorder" << endl;
        cout << "6. Non-recursive Inorder" << endl;
        cout << "7. Non-recursive Postorder" << endl;
        cout << "8. Level order traversal" << endl;
        cout << "9. Search "<< endl;
        cout << "10. Delete "<< endl;
        cout << "11. Quit" << endl;
        cout << "Select an option: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                tree.insert(10); 
                tree.insert(5); 
                tree.insert(15);
                tree.insert(7);  
                tree.insert(3); 
                tree.insert(13);
                tree.insert(18);
//cout << "Nodes (10, 5, 15, 7, 3, 13, 18) inserted." << endl;
                break;
            case 2: 
                tree.recursive_preorder(); 
                break;
            case 3: 
                tree.recursive_inorder(); 
                break;
            case 4: 
                tree.recursive_postorder(); 
                break;
            case 5: 
                tree.non_recursive_preorder(); 
                break;
            case 6: 
                tree.non_recursive_inorder(); 
                break;
            case 7:
                tree.non_recursive_postorder(); 
                break;
            case 8:
            	tree.level_order_traversal();
            	break;
            case 9:{
            	
            	int element;
            	cout << "Enter the Element to Find: ";
            	cin >> element;
            	
            	if(tree.search(element)){
            		cout << element <<" found in binary tree"<<endl;
				}
				else{
					cout << element << " not found in Binary Tree" << endl;
				}
            	break;
			}
            	
            case 10:{
            	int dele;
            	cout << "Enter the element to delete";
            	cin >> dele;
            	node* ans = tree.Delete(dele);
            	cout << ans -> data <<" Element Deleted "<< endl;
				break;
			}
            	
            	
            case 11:
                cout << "Exiting program..." << endl; 
                break;
            default: 
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
