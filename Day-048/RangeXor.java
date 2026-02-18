
public class RangeXor {
    public static void main(String[] args) {
        int a = 3;
        int b = 9;
        int ans1 = xor(b) ^ xor(a-1);
        System.out.println(ans1);

        // This is for the cross-checking
        // This will give TLE for large number
        int ans2 = 0;
        for(int i = a ; i <= b ; i++){
            ans2 ^= i;
        }
        System.out.println(ans2);
    }

    static  int xor(int a){
        if(a % 4 == 0){
            return a;
        }
        if(a % 4 == 1){
            return 1;
        }
        if(a % 4 == 2){
            return a+1;
        }
        return 0;

    }
}

