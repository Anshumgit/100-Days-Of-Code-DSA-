//https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1

// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int n = mat.size();
    
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }
    for(int i = 0 ; i < n ; i++ ){
        reverse(mat[i].begin() , mat[i].end());
    }
    
}
