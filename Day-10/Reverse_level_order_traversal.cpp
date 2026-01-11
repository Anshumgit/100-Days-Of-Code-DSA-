#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		
		node(int d){
			this -> data = d;
			this -> left = NULL;
			this -> right = NULL;
		}
};

node* buildTree(node* root){
	cout << "Enter the data: ";
	int data;
	cin >> data;
	root = new node(data);
	
	if(data == -1){
		return NULL;
	}
	
	cout << "Enter the data for the left " << data << endl;
	root -> left = buildTree(root -> left);
	
	cout << "Enter the data for the right " << data << endl;
	root -> right = buildTree(root -> right);
	return root;
}

void levelOrderReversal(node* root){
	queue<node*> q;
	stack<node*> s;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		s.push(temp);
		
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
	
	cout << endl;
	
	while(!s.empty()){
		if(s.top() == NULL){
			cout << endl;
	        s.pop();
	        continue;
	    }
		cout << s.top() -> data << " ";
		s.pop();
	}
}

int main(){
	node* root = NULL;
	
	root = buildTree(root);
	levelOrderReversal(root);
}
