/*Question 11
Java Program to Convert Days into Years, Months and Days
 */

package Programs.FundamentalOfJava;
import java.util.Scanner;

public class Que3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Days: ");
        int days = in.nextInt();

        int years = days / 365;
        int remainingDays = days % 365;

        int months = remainingDays / 30;
        int finalDays = remainingDays % 30;

        System.out.println("Total Days: " + days);
        System.out.println("Years: " + years);
        System.out.println("Months: " + months);
        System.out.println("Days: " + finalDays);
    }
}
