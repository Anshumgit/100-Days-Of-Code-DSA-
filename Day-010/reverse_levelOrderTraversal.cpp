
void reverse_levelOrderTraversal(node* root){
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
			if(temp -> right){
				q.push(temp -> right);
			}
			if(temp -> left){
				q.push(temp -> left);
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
