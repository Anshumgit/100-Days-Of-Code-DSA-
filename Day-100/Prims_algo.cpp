void Prims(){
		int arr[var_lim][var_lim];
	int visited[var_lim];
	int total_edge = 0;
	int cost_sum = 0;
	
	int vertices;
	cout << "Enter the Total Number of Vertices : ";
	cin >> vertices;
	
	for(int i = 0 ; i < vertices ; i++){
		for(int j = i ; j < vertices; j++){
			if(i == j){// this is for the self loop instead of zero we can use this
				arr[i][j] = limit; // in prims we remove the self loop
			}
			else{
				cout << "Enter Weight for " << i << " to " << j << " : ";
				cin >> arr[i][j];
				
				if(arr[i][j] == 0){ // if any value default 0 in matrix then set to 9999 
					arr[i][j] = limit;
				} 
				arr[j][i] = arr[i][j];
			}
		}
	}
	
	
	for(int i = 0 ; i < vertices ; i++){
		visited[i] = false;
	}
	
	visited[0] = true;
	
	while(total_edge < vertices - 1){
		int mini = limit;
		int track_i = 0;
		int track_j = 0;
		
		for(int i = 0 ; i < vertices ; i++){
			if(visited[i]){
				for(int j = 0 ; j < vertices ; j++){
					if(!visited[j] && arr[i][j] != limit){
						if(mini > arr[i][j]){
							mini = arr[i][j];
							track_i = i;
							track_j = j;
						}
					}
				}
			}
		}
		cout << track_i << " - " << track_j << " : " << arr[track_i][track_j] << endl;
		
		cost_sum += arr[track_i][track_j];
		visited[track_j] = true;
		total_edge++;
	}
	cout << "Minimum cost of Tree = " << cost_sum;
	
}

