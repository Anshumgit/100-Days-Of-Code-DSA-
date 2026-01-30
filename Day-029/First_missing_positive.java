// https://leetcode.com/problems/first-missing-positive/

class Solution {
    public int firstMissingPositive(int[] nums) {
        cycle(nums);
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i] != i + 1){chat
                return i+1;
            }
        }
        return nums.length + 1;
    }

    public static void cycle(int[] nums){
        int i = 0;
        while(i < nums.length){
            int correct = nums[i] - 1;
            if(nums[i] > 0 && nums[i] <= nums.length && nums[i] != nums[correct]){
                swap(nums , i , correct);
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
