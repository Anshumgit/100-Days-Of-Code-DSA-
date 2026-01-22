// https://leetcode.com/problems/missing-number/submissions/1893671163/
// Amazon Question
class Solution {
    public int missingNumber(int[] nums) {
        cyclic(nums);
        //search for missing number
        for(int i = 0; i < nums.length ; i++){
            if(nums[i] != i){
                return i;
            }

        }

        //case 2
        return nums.length;
    }
    
    void cyclic(int[] arr){
        int i = 0;
        while(i < arr.length){
            int correct = arr[i];
            if(arr[i] < arr.length && arr[i] != arr[correct]){
                swap(arr , i , correct);
            }
            else{
                i++;
            }
        }
    }


    static public void swap(int[] arr,int a , int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}
