package OOP2;

public class Human {
    int age;
    String name;
    int salary;
    boolean married;

    public Human(int age, String name , int salary ,boolean married) {
        this.age = age;
        this.name = name;
        this.salary = salary;
        this.married = married;
    }

}



// 2nd class which we have make object
package OOP2;

public class Main {
    public static void main(String[] args) {
        Human Anshum = new Human(19,"Anshum Mankar" , 10000 , false);
        System.out.println("Hello "+Anshum.name);
    }
}
