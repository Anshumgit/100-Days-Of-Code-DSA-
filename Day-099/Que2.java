/*Create a class Animal with a method sound().
Create a subclass Dog that overrides sound() to print "Dog barks"
Demonstrate method overriding in main()*/

package Anshum;
class Animal{
	void sound() {
		System.out.println("Animal makes sound");
	}
	
}
class Dog extends Animal{
	void sound() {
		System.out.println("Dog barks");
	}
}
public class Que2 {
	public static void main(String[] args) {
		Dog pero = new Dog();
		pero.sound();
	}
}
