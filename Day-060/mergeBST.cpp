//https://www.naukri.com/code360/problems/merge-two-bsts_920474?leftPanelTabValue=PROBLEM

// TC = O(n + m);
// SC = O(n + m);


/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/
void inorder(TreeNode *root , vector<int>& in){
    if(root == NULL){
         return;
    }
    inorder(root -> left , in);
    in.push_back(root -> data);
    inorder(root -> right , in);
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    vector<int> in1;
    vector<int> in2;
    vector<int> ans;
    inorder(root1 , in1);
    inorder(root2 , in2);
        
    int i = 0 , j = 0;
    int size1 = in1.size();
    int size2 = in2.size();
    while(i < size1 && j < size2){
        if(in1[i] < in2[j]){
            ans.push_back(in1[i]);
            i++;
        }
        else if(in1[i] > in2[j]){
            ans.push_back(in2[j]);
            j++;
        }
        else{
            ans.push_back(in1[i]);
            ans.push_back(in2[j]);
            i++;
            j++;
        }
    }
    while(i < size1){
        ans.push_back(in1[i]);
        i++;
    }
    while(j < size2){
        ans.push_back(in2[j]);
        j++;
    }
        
    return ans;
}
