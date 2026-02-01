public class power_of_2 {
    public static void main(String[] args) {
        int n = 35;
        if(n == 0){ // Note : exception if n == 0it should return false
            System.out.println(false);;
        }
        boolean ans = (n & (n-1)) == 0;
        System.out.println(ans);
    }
}
