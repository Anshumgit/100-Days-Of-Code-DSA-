package Recursion_2;

public class linear_search_recursion {
    public static void main(String[] args) {
        int[] arr = {3 , 2 , 1 , 18 ,9};
        System.out.println(search(arr,0,9));
    }

//    static boolean search(int[] arr , int index ,int target){
//        if(index == arr.length-1 && arr[index] != target){
//            return false;
//        }
//
//        if(arr[index] != target){
//            return search(arr , index + 1 , target) ;
//        }
//        return  arr[index] == target;
//    }
    static boolean search(int[] arr , int index ,int target){
        if(index == arr.length-1 && arr[index] != target){
            return false;
        }

        return (arr[index] == target) || search(arr , index + 1 , target) ;
    }
}
