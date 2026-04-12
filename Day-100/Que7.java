/*Create a class Shape with a method draw().
Create subclasses Circle and Rectangle
Override draw() in both classes
Use parent reference to call overridden methods*/

package Inheritance;


class Shape{
   void draw(){
       System.out.println("Shape is drawn");
   }
}


class circle extends Shape{
   @Override
   void draw(){
       System.out.println("Circle is Drawn ");
   }
}
class rectangle extends Shape{
   @Override
   void draw(){
       System.out.println("Rectangle is drawn");
   }
}


public class Que7 {
   public static void main(String[] args){
       Shape s1 = new circle();
       Shape s2 = new rectangle();


       s1.draw();
       s2.draw();
   }
}
