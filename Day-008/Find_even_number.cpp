// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
    static int digit(int num ){
        int cnt = 0;
        while( num > 0){
            cnt++;
            num /= 10;
        }
        return cnt;
    }
    static boolean even(int num ){
        int digit = digit(num);
        return digit % 2 == 0;
    }

    public int findNumbers(int[] nums) {
        int count = 0;
        for(int i = 0 ; i < nums.length ; i++){
            if (even(nums[i]) ){
                count++;
            }
        }
        return count;
    }
}
