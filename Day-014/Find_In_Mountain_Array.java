//https://leetcode.com/problems/find-in-mountain-array/


/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray arr){
        int peak = peakIndexInMountainArray(arr);
        int firstry = OrderAgnostic(arr , target,0 , peak);
        if (firstry != -1){
            return firstry;
        }
        //try to search in
        // the second half
        return OrderAgnostic(arr,target,peak + 1, arr.length() -1);
    }


    public int peakIndexInMountainArray(MountainArray arr) {
        int start = 0;
        int end = arr.length() -1;

        while(start < end ){
            int mid = start + (end - start)/2;

            if(arr.get(mid) > arr.get(mid+1)){
                end = mid;
            }
            else if (arr.get(mid) < arr.get(mid+1)){
                start = mid +1;
            }

        }
        return start;
    }

    static int OrderAgnostic(MountainArray arr, int target , int start , int end) {

        boolean isAsc = arr.get(start) < arr.get(end);

        while(start <= end) {
            int mid = start + (end - start)/2;

            if(target == arr.get(mid)){
                return mid;
            }
            
            if(isAsc){
                if(target < arr.get(mid)){
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            } else {
                if(target > arr.get(mid)){
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }

        }
        return -1;
    }
}
