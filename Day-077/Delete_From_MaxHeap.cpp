//T.C = O(log n);
void deleteFromHeap(){
			
			if(size == 0){
				cout << "Nothing to delete "<< endl;
				return;
			}
//			step1
			arr[1] = arr[size];
//			step2
			size--;
//			step3
			int i = 1;
			while(i < size){
				int leftChild = 2 *i;
				int rightChild = 2 *i + 1;
				if(leftChild < size && arr[i] < arr[leftChild]){
					swap(arr[i] , arr[leftChild]);
					i = leftChild;
				}
				else if(rightChild < size && arr[i] < arr[rightChild]){
					swap(arr[i] , arr[rightChild]);
					i = rightChild;
				}
				else{
					return ;
					
				}
			}
			
		}
