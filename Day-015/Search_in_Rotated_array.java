//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
    public int search(int[] nums, int target) {
        int pivot = findPivot(nums , 0 , nums.length - 1);
// IF THE PIVOT IS NOT FOUND APPLY THE NORMAL BINARY SEARCH
        if(pivot == -1){
            return binarySearch(nums, target , 0 , nums.length - 1);
        }
// IF PIOVT IS FOUND
        if(target == nums[pivot]){
            return pivot;
        }
        if(target >= nums[0]){
            return binarySearch(nums, target , 0 , pivot - 1);
        }
        //target < nums[0]
        return binarySearch(nums, target ,pivot + 1, nums.length - 1);

    }

    int binarySearch(int[] nums, int target ,int start , int end ){
        while(start <= end){
            int mid = start + (end - start)/2 ;
            if(nums[mid] < target){
                start = mid +1;
            }
            else if (nums[mid] > target){
                end = mid -1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    int findPivot(int[] nums ,int start , int end ){
        while(start <= end){
            int mid = start + (end - start)/2 ;
            // 4 cases
            if(mid < end && (nums[mid] > nums[mid + 1])){
                return mid;
            }
            if(mid > start && (nums[mid] < nums[mid - 1])){
                return mid;
            }
            if(nums[start] >= nums[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
}
