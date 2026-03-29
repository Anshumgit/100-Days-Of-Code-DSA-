//removes only the Terminal Node
		void removeUtil(TrieNode* root , string word){
			if(word.length() == 0 && root -> isTerminal == true){
				root -> isTerminal = false;
				return ;
			}
			
			int index = word[0] - 'A';
			TrieNode* child;
			
			if(root -> childern[index] != NULL){
				child = root -> childern[index] ;
			}
			else{
				return;
			}
			removeUtil(child , word.substr(1));
		}
		
		void removeWord(string word){
			removeUtil(root , word);
		}
		
