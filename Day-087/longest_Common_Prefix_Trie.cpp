//https://www.naukri.com/code360/problems/longest-common-prefix_2090383?leftPanelTabValue=SUBMISSION

// TC = O(M * n)
// SC = O(M * n)
class TrieNode{
	public:
		char data;
		TrieNode* childern[26];
		bool isTerminal;
        int childCount;
		
		TrieNode(char ch){
			this-> data = ch;
			for(int i = 0 ; i < 26 ; i++){
				childern[i] = NULL;
			}
			isTerminal = false;
            childCount = 0;
		}
};

class Trie{
	public:
		TrieNode* root; // root node bangai
		
		Trie(){
			root = new TrieNode('\0');
		}
        void insertUtil(TrieNode* root , string word){
		//base case
		if(word.length() == 0){
			root -> isTerminal = true;
			return;
		}

		int index = word[0] - 'a';
		TrieNode* child;
			
		//present
		if(root -> childern[index] != NULL){
			child = root ->childern[index];
		}
		else{//absent
			child = new TrieNode(word[0]);
            root -> childCount++;
			root -> childern[index] = child;
		}
			
		//recursion
		insertUtil(child , word.substr(1));
	}
		
	void insertWord(string word){
		insertUtil(root , word);
	}
    
    void lcp(string str , string &ans){
		TrieNode* temp = root;
        for(int i = 0 ; i < str.length() ; i++){
            char ch = str[i];
			

            if(temp -> childCount == 1){
                ans.push_back(ch);
                // aage badh jaoo
                int index = ch - 'a';
                temp = temp->childern[index]; 
            }
            else{
                break;
            }

            if(temp -> isTerminal){
                break;
            }
        }

    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    Trie* t = new Trie();

    //insert kardo all string into trie
    for(int i = 0 ; i < n ; i++){
        t -> insertWord(arr[i]);
    }

    string first = arr[0];
    string ans = "";
    t -> lcp(first , ans);
    return ans;
}


