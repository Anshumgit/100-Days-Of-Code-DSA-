// https://www.geeksforgeeks.org/problems/k-sum-paths/1

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
    /*void solve(Node* root , int k , int &count , vector<int> &path){
        if(root == NULL){
            return ;
        }   
        
        path.push_back(root -> data);
        //left
        solve(root -> left , k , count , path);
        //right
        solve(root -> right, k , count , path);
        
        int size = path.size();
        int sum = 0;
        for(int i = size - 1 ; i >= 0 ; i--){
            sum += path[i];
            if(sum == k ){
                count++;
            }
            
        }
        
        path.pop_back();
    }
    
    int countAllPaths(Node *root, int k) {
        // code here
        vector<int> path;
        int count = 0;
        
        solve(root , k , count , path);
        return count;
    }*/
    
    void solve(Node* root, int k, long long currSum,
               unordered_map<long long, int> &mp, int &count) {
        if (!root) return;

        // Step 1: Update current sum
        currSum += root->data;

        // Step 2: Check if there exists a prefix sum
        // such that currSum - prefixSum = k
        if (mp.find(currSum - k) != mp.end())
            count += mp[currSum - k];

        // Step 3: Store current sum in map
        mp[currSum]++;

        // Step 4: Recurse left & right
        solve(root->left, k, currSum, mp, count);
        solve(root->right, k, currSum, mp, count);

        // Step 5: Backtrack
        mp[currSum]--;
    }

    int countAllPaths(Node *root, int k) {
        unordered_map<long long, int> mp;
        mp[0] = 1;   // important
        int count = 0;
        solve(root, k, 0, mp, count);
        return count;
    }

};
