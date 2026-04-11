/*Create a class Person with a constructor that prints "Person Created".
Create a class Student that extends Person
Add a constructor in Student that prints "Student Created"
Create an object of Student and observe the output*/

package Inheritance;
class Person{
   Person(){
       System.out.println("Person Created");
   }
}

class Student extends Person{
   Student(){
       System.out.println("Student Created");
   }
}

public class Que3 {
   public static void main(String[] args) {
       Student var  = new Student();


   }
}
