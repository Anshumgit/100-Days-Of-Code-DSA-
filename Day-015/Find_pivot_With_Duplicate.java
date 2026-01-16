static int findPivotWithDuplicate(int[] nums ,int start , int end ){
        while(start <= end){
            int mid = start + (end - start)/2 ;
            // 4 cases
            if(mid < end && (nums[mid] > nums[mid + 1])){
                return mid;
            }
            if(mid > start && (nums[mid] < nums[mid - 1])){
                return mid - 1 ;
            }
            if(nums[start] == nums[mid] && nums[end] == nums[mid]){
                if(nums[start] > nums[start + 1]){
                    return start;
                }
                start++;
                if(nums[end - 1] > nums[end] ){
                    return end - 1;
                }
                end--;
            }
            //left side is sorted then the pivot is inthe right
            else if(nums[start] < nums[mid] || (nums[start] == nums[mid] && nums[end] < nums[mid])){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
