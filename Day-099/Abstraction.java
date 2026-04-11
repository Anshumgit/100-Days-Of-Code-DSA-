package Abstraction;

abstract class Boss{
   abstract void task();
   void salary(){
       System.out.println("20K");
   }
}

class Emp extends Boss{
   @Override
   void task(){
       System.out.println("Task Completed");
   }
}

public class Abstract {
   public static void main(String[] args)  {
       Emp obj = new Emp();
       obj.task();
   }
}
