// https://www.geeksforgeeks.org/problems/rotation4723/1

class Solution {
    public int findPivot(int arr[], int start , int end ){
        while(start <= end){
            int mid = start + (end - start )/2;
            
            if(mid < end && arr[mid] > arr[mid + 1]){
                return mid;
            }
            if(mid > start && arr[mid] < arr[mid - 1]){
                return mid - 1;
            }
            if(arr[start] >= arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1 ;
            }
        }
        return - 1;
    } 
    public int findKRotation(int arr[]) {
        // Code here
        int ans = findPivot(arr, 0 , arr.length - 1) ;
        if(ans == -1){
            return 0;
        }
        return ans+1;
    }
}
