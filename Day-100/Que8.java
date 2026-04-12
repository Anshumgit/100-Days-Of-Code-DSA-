/*
Create a class Bank with a method getRateOfInterest().
Create subclasses SBI and HDFC
Return different interest rates in each subclass
Use a parent reference to demonstrate runtime polymorphism
*/

package Inheritance;

class Bank{
   double getRateOfInterest(){
       return 6.0;
   }
}


class SBI extends Bank{
   double getRateOfInterest(){
       return 6.5;
   }
}

class HDFC extends Bank{
   double getRateOfInterest(){
       return 7.0;
   }
}

public class Que8 {
   public static void main() {
       Bank b;
       b = new SBI();
       System.out.println("SBI rate of Interest : " + b.getRateOfInterest());
       b= new HDFC();
       System.out.println("HDFC rate of Interest : " + b.getRateOfInterest());
   }
}
