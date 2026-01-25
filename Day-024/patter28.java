public class pattern28 {
    public static void main(String[] args) {
        pattern28(5);
    }

    public static void pattern28(int n){
        for(int i = 0 ; i < 2*n ; i++){
            int totalColInRow = i > n ? 2*n - i : i;
            int noOfSpaces = n - totalColInRow;
            for(int s = 0 ; s < noOfSpaces ; s++){
                System.out.print(" ");
            }

            for(int col = 0; col < totalColInRow ; col++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}


