package Recursion_2;

import java.util.ArrayList;

public class linear_search_recursion {
    public static void main(String[] args) {
        int[] arr = {3 , 2 , 1 , 1, 18 ,9, 9 ,6};
        ArrayList<Integer> ans = findAllIndex(arr , 0, 9 , new ArrayList<>());
        System.out.println(ans);
    }

    static ArrayList<Integer> findAllIndex(int[] arr , int index , int target, ArrayList<Integer> list){
        if(index == arr.length ){
            return list;
        }
        if(target == arr[index]){
            list.add(index);
        }

        return findAllIndex(arr , index + 1 , target , list);
    }
}
