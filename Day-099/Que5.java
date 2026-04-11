/*Create a class Vehicle with a parameterized constructor to initialize brand.
Create a subclass Car with an additional variable model
Use super() to initialize the parent property
Print both values*/

package Inheritance;

class Vehicle{
   String brand ;
   Vehicle(String brand){
       this.brand = brand;
   }
}

class Car extends Vehicle{
   String model;
   Car(String brand,String model){
       super(brand);
       this.model = model;
   }
   void showCar(){
       System.out.println(super.brand);
       System.out.println(this.model);
   }
}

public class Que5 {
   public static void main(String[] args) {
       Car c = new Car("Mercedes","A-Class");
       c.showCar();
   }
}
