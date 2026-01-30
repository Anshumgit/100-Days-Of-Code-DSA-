public class Main {
    public static void main(String[] args) {
        if(isOdd(68)){
            System.out.println("Number is Odd");
        }
        else{
            System.out.println("Number is Even");
        }
    }
    static boolean isOdd(int n){
        return (n&1) == 1;
    }
}
