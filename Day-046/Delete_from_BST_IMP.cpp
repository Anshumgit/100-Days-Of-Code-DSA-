//Deletion from BST IMP
#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		node(int data){
			this -> data = data;
			this -> right = NULL;
			this -> left = NULL;
			
		}
};

node* insertintoBST(node* root , int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}
	
	if(data > root->data){
		root -> right = insertintoBST(root -> right,data);
	}
	if(data < root->data){
		root -> left = insertintoBST(root -> left ,data);
	}
	return root;
}

void takeinput(node* &root){
	int data;
	cin >> data;
	while(data != -1){
		root = insertintoBST(root , data);
		cin >> data;
	}
}

void levelOrder(node* root){
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

node* minValue(node* root){
	node* temp = root;
	while(temp -> left != NULL){
		temp = temp -> left;
	}
	return temp;
}

node* maxValue(node* root){
	node* temp = root;
	while(temp -> right != NULL){
		temp = temp -> right;
	}
	return temp;
}


node* deleteFromBST(node* root ,int val){
	if(root == NULL){
		return NULL;
	}
	if(root->data == val){
	// 0 child
		if(root -> left == NULL && root -> right == NULL){
			delete root;
			return NULL;
		}
	// 1 child
		//left child
		if(root -> left != NULL && root -> right == NULL){
			node* temp = root -> left;
			delete root;
			return temp;
		}
		//right child 
		if(root -> left == NULL && root -> right != NULL){
			node* temp = root -> right;
			delete root;
			return temp;
		}
	// 2 child
		if(root -> left != NULL && root -> right != NULL){
			int mini = minValue(root -> right) -> data;
			root -> data = mini;
			root -> right = deleteFromBST(root -> right , mini);
			return root;
		}
		
	}
	else if(root -> data > val){
		// left part me jaoo
		root -> left = deleteFromBST(root -> left , val);
	}
	else if(root -> data < val){
		// left part me jaoo
		root -> right = deleteFromBST(root -> right , val);
	}
}


int main(){
	node* root = NULL;
	cout <<	"Enter the data for BST: ";
	takeinput(root);
	cout << endl;
	levelOrder(root);
	cout << endl;
	
	root = deleteFromBST(root , 100);
	levelOrder(root);
	return 0;
}
  
