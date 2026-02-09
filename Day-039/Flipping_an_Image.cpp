// https://leetcode.com/problems/flipping-an-image/
//832.  Flipping an Image
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(auto &arr : image){
            int s = 0;
            int e = arr.size()-1;
            while(s <= e){
                int temp = arr[s] ^ 1;
                arr[s] = arr[e] ^ 1;
                arr[e] = temp;
                s++ ;
                e--;
            }
        }
        return image;
    }
};
