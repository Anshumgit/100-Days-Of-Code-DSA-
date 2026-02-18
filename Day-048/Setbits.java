
public class Setbits {
    public static void main(String[] args) {
        int n = 453;
        System.out.println(Integer.toBinaryString(n));
        System.out.println(setbit(n));
    }

    private static int setbit(int n) {
        int cnt = 0;
//        while(n > 0){
//            cnt++;
//            n -= n & (-n);
//        }
        while(n > 0){
            cnt++;
            n = n & (n-1);
        }
        return cnt;
    }
}


