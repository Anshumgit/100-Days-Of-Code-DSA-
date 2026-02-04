package Recursion_2;

public class Sorted_arr {
    public static void main(String[] args) {
        int[] arr = {1 , 5,2 , 4 };
        System.out.println(sort(arr , 0));
    }

//    static boolean sort(int[] arr , int index){
//        if(index == arr.length-1){
//            return true;
//        }
//        if(arr[index] < arr[index+1]){
//            return sort(arr , index + 1);
//        }
//        return false;
//    }

    static boolean sort(int[] arr , int index){
        if(index == arr.length-1){
            return true;
        }
        return (arr[index] < arr[index+1]) && sort(arr , index + 1);
    }
}
