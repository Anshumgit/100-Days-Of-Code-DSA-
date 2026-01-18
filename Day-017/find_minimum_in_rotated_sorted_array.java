// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
    public int findMin(int[] nums) {
        int pivot = findPivot(nums , 0 , nums.length - 1);
        if(pivot == nums.length - 1){
            return nums[0];
        }
        return nums[pivot + 1];
    }

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
}
