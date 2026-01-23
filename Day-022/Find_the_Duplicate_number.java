// same as the 448 
// can be done by fast and slow pointer approach
//https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
    public int findDuplicate(int[] nums) {
        int i = 0;
        while(i < nums.length){
            int correct = nums[i] - 1;
            if(nums[i] != nums[correct]){
                swap(nums , i , correct);
            }
            else{
                i++;
            }
        }

        for(int j = 0 ; j < nums.length ; j++){
            if(nums[j] != j+1){
                return nums[j];
            }
        }
        return -1;
    }

    public void swap(int[] arr,int a , int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

}
