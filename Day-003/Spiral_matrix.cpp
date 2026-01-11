// https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        vector<int> arr;
        int srow = 0;
        int erow = mat.size()-1;
        
        int scol = 0;
        int ecol = mat[0].size()-1;
        
        while(srow <= erow && scol <= ecol){
            //top
            for(int i = scol ; i <= ecol ; i++){
                arr.push_back(mat[srow][i]);
            }
            
            //right
            for(int j = srow+1 ; j <= erow ; j++){
                arr.push_back(mat[j][ecol]);
            }
            
            //bottom
            for(int i =  ecol-1 ; i >= scol ; i--){
                if(srow == erow){
                    break;
                }
                arr.push_back(mat[erow][i]);
            }
            
            //left
            for(int j = erow-1 ; j >= srow+1 ; j--){
                if(scol == ecol){
                    break;
                }
                arr.push_back(mat[j][scol]);
            }
            
            srow++,ecol--,erow--,scol++;
            
        }
        return arr;
        
    }
};
