// same as the 448 
// can be done by fast and slow pointer approach
//https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
    public int findDuplicate(int[] nums) {
        int i = 0;
        while(i < nums.length){

            if(nums[i] != i+1){
                int correct = nums[i] - 1;
                if(nums[i] != nums[correct]){
                    swap(nums , i , correct);
                }
                else{
                    return nums[i];
                }
            }
            else{
                i++;
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
