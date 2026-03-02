class Solution {
  public:
    // Convert BST to Sorted Doubly Linked List in-place
    void convertIntoSortedDLL(Node* root, Node* &head) {
        if (root == NULL) return;
        
        // Reverse inorder to build list from end to beginning
        convertIntoSortedDLL(root->right, head);
        
        root->right = head;
        if (head != NULL) {
            head->left = root;
        }
        head = root;
        
        convertIntoSortedDLL(root->left, head);
    }
    
    // Merge two sorted DLLs
    Node* mergeLinkedList(Node* head1, Node* head2) {
        Node* head = NULL;
        Node* tail = NULL;
        
        while (head1 != NULL && head2 != NULL) {
            if (head1->data < head2->data) {
                if (head == NULL) {
                    head = tail = head1;
                    head1 = head1->right;
                } else {
                    tail->right = head1;
                    head1->left = tail;
                    tail = head1;
                    head1 = head1->right;
                }
            } else {
                if (head == NULL) {
                    head = tail = head2;
                    head2 = head2->right;
                } else {
                    tail->right = head2;
                    head2->left = tail;
                    tail = head2;
                    head2 = head2->right;
                }
            }
        }
        
        // Attach remaining nodes
        while (head1 != NULL) {
            tail->right = head1;
            head1->left = tail;
            tail = head1;
            head1 = head1->right;
        }
        while (head2 != NULL) {
            tail->right = head2;
            head2->left = tail;
            tail = head2;
            head2 = head2->right;
        }
        return head;
    }

    void storeInorder(Node* root, vector<int>& ans) {
        if (!root) return;
        storeInorder(root->left, ans);
        ans.push_back(root->data);
        storeInorder(root->right, ans);
    }

    int cntNode(Node* head) {
        int cnt = 0;
        while (head) {
            cnt++;
            head = head->right;
        }
        return cnt;
    }

    // Convert Sorted DLL to Balanced BST
    // head MUST be passed by reference to move through the list
    Node* sortedLLToBST(Node* &head, int n) {
        if (n <= 0 || head == NULL) return NULL;
        
        Node* leftSubtree = sortedLLToBST(head, n / 2);
        
        Node* root = head;
        root->left = leftSubtree;
        
        head = head->right; // Move global head forward
        
        root->right = sortedLLToBST(head, n - n / 2 - 1);
        return root;
    }

    vector<int> merge(Node *root1, Node *root2) {
        // 1. Convert both BSTs to DLL
        Node* head1 = NULL;
        convertIntoSortedDLL(root1, head1);
        if(head1) head1->left = NULL;
        
        Node* head2 = NULL;
        convertIntoSortedDLL(root2, head2);
        if(head2) head2->left = NULL;
        
        // 2. Merge the two DLLs
        Node* mergedHead = mergeLinkedList(head1, head2);
        
        // 3. Convert DLL back to BST
        int totalNodes = cntNode(mergedHead);
        Node* mergedRoot = sortedLLToBST(mergedHead, totalNodes);
        
        // 4. Return as vector
        vector<int> ans;
        storeInorder(mergedRoot, ans);
        return ans;
    }
};
