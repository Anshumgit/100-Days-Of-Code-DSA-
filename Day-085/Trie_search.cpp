#include<iostream>
using namespace std;

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
		
		
		bool searchUtil(TrieNode* root , string word){
			//base case
			if(word.length() == 0){
				return root->isTerminal;
			}
			
			int index = word[0] - 'a';
			TrieNode* child; 
			
			//present
			if(root -> childern[index] != NULL){
				child = root -> childern[index];
			}
			else{//absent
				return false;
			}
			//recursion
			return searchUtil(child , word.substr(1));
		}
		
		bool searchWord(string word){
			return searchUtil(root , word);
		}
		
		
};

int main(){
	
	//case1 
	Trie* t = new Trie();
	t -> insertWord("abcd");
	
	cout << "Present Or Not " << t -> searchWord("abcd");
	

}
