/*Create three classes:
Animal
Dog extends Animal
Puppy extends Dog
Each class should have one method.
Show that Puppy can access all methods from parent classes.*/

package Inheritance;

class Animal{
   void sound() {
       System.out.println("Animal makes sound");
   }
}

class Dog extends Animal{
   void sound1() {
       System.out.println("Dog barks");
   }
}

class Puppy extends Dog{
   void sound2() {
       System.out.println("Puppy is from Dog class");
   }
}

public class Que6 {
   public static void main(String[] args) {
       Puppy pero = new Puppy();
       pero.sound();
       pero.sound1();
       pero.sound2();
   }
}
