import java.util.Arrays;

public class Insertion_sort {
    public static void main(String[] args){
        int[] arr = {10 , -5 , 0 , 8 , 2 , -3, -8 };
        insertion(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void insertion(int[] arr){
        for(int i = 0; i < arr.length - 1 ; i++){
            for(int j = i+1 ; j > 0 ; j--){
                if(arr[j] < arr[j-1]){
                    swap(arr , j , j-1 );
                }
                else{
                    break;
                }
            }
        }
    }

    static public void swap(int[] arr,int a , int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}
