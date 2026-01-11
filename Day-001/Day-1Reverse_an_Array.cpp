/* https://www.geeksforgeeks.org/problems/reverse-an-array/1 */
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int size= arr.size();
        int s = 0 , e =size-1;
        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
};
