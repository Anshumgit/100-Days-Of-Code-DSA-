package Overriding;
// method hiding
class A{
   static void msg(){ // remove static for overloading
       System.out.println("A");
   }
}


class B extends A{
   static void msg(){ // remove static for overloading
       System.out.println("B");
   }
}


public class Override {
   public static void main(String[] args){
       A ref = new B();
       ref.msg();
   }
}
