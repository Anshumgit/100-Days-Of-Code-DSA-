public class Search_in_Infinite_array {
    void main(String[] args) {
        int[] arr = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
        int target = 10;
        int ans = find_range(arr , target);
        System.out.println(ans);
    }

    static int find_range(int[] arr, int target ){
        int start= 0;
        int end = 1;
        while(target > arr[end]){
            int newStart = end + 1;
            end = end + (end - start + 1);
            start = newStart;
        }
        return Binary_search(arr , target , start ,end);
    }
    static int Binary_search(int[] arr , int target, int start , int end){

        while(start <= end ){
            int mid = start + (end - start)/2;
            if(target < arr[mid]){
                end = mid -1;
            }
            else if(target > arr[mid]){
                start = mid +1;
            }
            else {
                return mid;
            }
        }
        return -1;
    }
}




