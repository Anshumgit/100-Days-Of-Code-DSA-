*/ Create a class Animal with a method eat() that prints "Animal eats".
Create a class Dog that extends Animal
In main(), create an object of Dog and call eat() */

package Anshum;
class Animal{
	void eat() {
		System.out.println("Animal Eat");
		
	}
	
}
class Dog extends Animal{
	
}
public class Que1 {
	public static void main(String[] args) {
		Dog pero = new Dog();
		pero.eat();
	}
}
