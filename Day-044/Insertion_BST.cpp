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

int main(){
	node* root = NULL;
	cout <<	"Enter the data for BST: ";
	takeinput(root);
	cout << endl;
	levelOrder(root);
	return 0;
}
