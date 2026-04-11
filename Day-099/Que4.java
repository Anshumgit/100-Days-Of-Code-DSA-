/*
Create a class Employee with a variable salary = 50000.
Create a subclass Manager with a variable salary = 80000
Write a method to print both salaries using this and super
*/

package Inheritance;

class Employee{
   int salary = 50000;
}

class Manager extends Employee{
   int salary = 80000;

   void showsal(){
       System.out.println(this.salary);
       System.out.println(super.salary);
   }
}

public class Que4 {
   static void main() {
       Manager m = new Manager();
       m.showsal();
   }
}
