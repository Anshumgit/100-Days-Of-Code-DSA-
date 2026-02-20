package OOP2;

public class Human {
    int age;
    String name;
    int salary;
    boolean married;
    static int population;

    public Human(int age, String name , int salary ,boolean married) {
        this.age = age;
        this.name = name;
        this.salary = salary;
        this.married = married;
        Human.population += 1;
    }

}


//2nd class MAIN

package OOP2;

public class Main {
    public static void main(String[] args) {
        Human Anshum = new Human(19,"Anshum Mankar" , 10000 , false);
        System.out.println("Human 1 added "+Anshum.name);
        System.out.println("Population Count:"+Anshum.population);

        Human Rahul = new Human(19,"Rahul Bhandare" , 15000 , false);
        System.out.println("Human 2 added "+Rahul.name);
        System.out.println("Population Count:"+Rahul.population);

        Human Vikas = new Human(19,"Vikas Choudhary" , 20000 , false);
        System.out.println("Human 3 added "+Vikas.name);
        System.out.println("Population Count:"+Vikas.population);
    }
}
