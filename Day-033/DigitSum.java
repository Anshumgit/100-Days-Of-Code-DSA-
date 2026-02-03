package Recursion_1;

public class DigitSum {
    public static void main(String[] args) {
        System.out.println(func(1342));
    }

    static int func(int n){
        if(n <= 0){
            return 0;
        }

        return n % 10 + func(n / 10);
    }
}
