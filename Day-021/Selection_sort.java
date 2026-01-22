import java.util.*;

public class Selection_Sort {
    public static void main(String[] args){
        int[] arr = {10 , -5 , 0 , 8 , 2 , -3, -8 };
        selection(arr);
        System.out.println(Arrays.toString(arr));
    }
    public static void selection(int[] arr){
        int n = arr.length;
        for(int i = 0 ; i < n ; i++){
            int last = n - i - 1;
            int max_element = getMax(arr , 0 , last);
            swap(arr , max_element , last);
        }


    }
    static public void swap(int[] arr,int a , int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    static public int getMax(int[] arr, int start ,int end){
        int max = start;
        for(int i = 0 ; i <= end ; i++){
            if(arr[i] > arr[max]){
                max = i;
            }
        }
         return max;
    }

}
