
void heapify(int arr[] , int n , int i){
	int largest = i;
	int leftChild = 2 * i;
	int rightChild = 2 * i + 1;
			
	if(leftChild <= n && arr[largest] < arr[leftChild]){
		largest = leftChild;
	}
	if(rightChild <= n && arr[largest] < arr[rightChild]){
		largest = rightChild;
	}
			
	if(largest != i){
		swap(arr[i] , arr[largest]);
		heapify(arr , n , largest);
	}
}
 
void heapSort(int arr[] , int n){
	int size = n;
	while(size > 1){
		swap(arr[size] , arr[1]);
		size--;
		heapify(arr , size , 1);
	}
}
 
int main(){
	//Heapify
	int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50};// converting array to heap
	int n = 5;
	for(int i = n/2 ; i > 0; i--){
		heapify(arr , n , i);
	}
	
	cout << "Printing array :" << endl;
	for(int i = 1 ; i <= n ; i++){
		cout << arr[i] << " ";
	}cout << endl;
	
	//Heap Sort
	heapSort(arr , n);
	cout << "Printing Sorted array :" << endl;
	for(int i = 1 ; i <= n ; i++){
		cout << arr[i] << " ";
	}cout << endl;
}
