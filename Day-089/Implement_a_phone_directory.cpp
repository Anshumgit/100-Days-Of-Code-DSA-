//https://www.naukri.com/code360/problems/implement-a-phone-directory_1062666?leftPanelTabValue=SUBMISSION
// m = avg length of word
// n = no. of string
// TC = O(n * m square)
// SC = O( n * m );

class TrieNode{
	public:
		char data;
		TrieNode* childern[26];
		bool isTerminal;
		
		TrieNode(char ch){
			this-> data = ch;
			for(int i = 0 ; i < 26 ; i++){
				childern[i] = NULL;
			}
			isTerminal = false;
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
			
			// assumption all letters is in caps
			int index = word[0] - 'a';
			TrieNode* child;
			
			//present
			if(root -> childern[index] != NULL){
				child = root ->childern[index];
			}
			else{//absent
				child = new TrieNode(word[0]);
				root -> childern[index] = child;
			}
			
			//recursion
			insertUtil(child , word.substr(1));
		}
		
		void insertWord(string word){
			insertUtil(root , word);
		}

        void printSuggestion(TrieNode* curr , vector<string>& temp , string prefix){
            if(curr -> isTerminal){
                temp.push_back(prefix);
            }

            for(char ch = 'a' ; ch <= 'z' ; ch++){
                TrieNode* next = curr -> childern[ch - 'a'];
                if(next != NULL){
                    prefix.push_back(ch);
                    printSuggestion(next , temp , prefix);
                    prefix.pop_back();

                }


            }



        }
		
        vector<vector<string>> getSuggestion(string str){
            TrieNode* prev = root;
            vector<vector<string>> output;
            string prefix = "";

            for(int i = 0 ; i < str.length() ; i++){
                char lastch = str[i];
                prefix.push_back(lastch);

                //check for the last character
                TrieNode* curr = prev -> childern[lastch - 'a'];

                //if not found
                if(curr == NULL){
                    break;
                }
                
                //if found
                vector<string> temp;
                printSuggestion(curr , temp , prefix);

                output.push_back(temp);
                temp.clear();
                prev = curr;
            } 
            return output;
        }
		
};

vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    //Write your code here.
    //creation of trie
    Trie* t = new Trie();

    //insert all contact in trie
    for(int i = 0 ; i < contactList.size() ; i++){
        string str = contactList[i];
        t -> insertWord(str);
    }

    return t -> getSuggestion(queryStr);
}
