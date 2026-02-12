//https://www.geeksforgeeks.org/problems/burning-tree/1
//time and space- O(n)



/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  //create mapping
  // return target node
  Node* cretaeParentMapping(Node* root , int target ,map<Node* , Node*> &nodetoParent ){
     Node* res = NULL;
     
     queue<Node*> q;
     q.push(root);
     nodetoParent[root] = NULL;
     
     while(!q.empty()){
         Node* front = q.front();
         q.pop();
         
         if(front -> data == target){
             res = front;
         }
         if(front -> left){
             nodetoParent[front -> left ] = front;
             q.push(front-> left);
         }
         if(front -> right){
             nodetoParent[front -> right ] = front;
             q.push(front-> right);
         }
     }
     
     return res;
  }
  
  int  burn_tree(Node* root , map<Node* , Node*> nodeToParent){
      map<Node* , bool> visited;
      queue<Node*> q;
      
      q.push(root);
      visited[root] = true;
      
      int ans = 0;
      while(!q.empty()){
          bool flag = 0;
          
          int size = q.size();
          for(int i = 0 ; i < size ; i++){
              // process neighbouring node
              Node* front = q.front();
              q.pop();
              
              if(front -> left && !visited[front -> left]){
                  flag = 1;
                  q.push(front -> left);
                  visited[front -> left] = 1;
              }
              
              if(front -> right && !visited[front -> right]){
                  flag = 1;
                  q.push(front -> right);
                  visited[front -> right] = 1;
              }
              
              if(nodeToParent[front] && !visited[nodeToParent[front]]){
                  flag = 1;
                  q.push(nodeToParent[front]);
                  visited[nodeToParent[front]] = 1;
              }
          }
          
          if(flag == 1){
              ans++;
          }
      }
      return ans;
      
  }
    int minTime(Node* root, int target) {
        // code here
        map<Node* , Node*> nodetoParent;
        Node* targetNode = cretaeParentMapping(root , target , nodetoParent);
        int ans = burn_tree(targetNode ,nodetoParent);
        
        return ans;
    }
};
