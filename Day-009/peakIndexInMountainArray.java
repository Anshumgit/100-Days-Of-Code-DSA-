https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length -1;


        while(start < end ){
            int mid = start + (end - start)/2;
            if(arr[mid] > arr[mid + 1]){
                // you are in descending part of the array
                // this may be the answer , but look on the left side
                //this is why end =! mid - 1
                end = mid;
            }
            else if(arr[mid] < arr[mid+1]){
                // you are in the asc part in the array
                // because we know that mid-1 element > mid element
                start = mid +1;
            }
        }
        return start;
    }
}
