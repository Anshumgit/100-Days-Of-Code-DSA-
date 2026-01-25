public class pattern5 {
    public static void main(String[] args) {
        pattern5(5);
    }
    public static void pattern5(int n) {
        /*for(int i = 0 ; i < n  ; i++){
            for(int j = 0 ; j < i + 1; j++){
                System.out.print("*");
            }
            System.out.println("");
        }

        for (int i = 0; i < n-1; i++) {
            for(int j = 0 ; j < n - i -1; j++){
                System.out.print("*");
            }
            System.out.println("");
        }*/

        for(int i = 0 ; i < 2*n ; i++){
            int totalColInRow = i > n ? 2*n - i : i;
            for(int j = 0 ; j < totalColInRow ; j++){
                System.out.print("* ");
            }
            System.out.println();
        }

    }
}

/*
        *
        * *
        * * *
        * * * *
        * * * * *
        * * * *
        * * *
        * *
        * 
        
 */
