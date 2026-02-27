package OOP5;
abstract public class Parents {
    int age ;
    final int VALUE;
    public Parents(int age){
        this.age = age;
        VALUE = 546898543;
    }
    abstract void career();
    abstract void partner();
}


package OOP5;
public class Son extends Parents{
    public Son(int age){
        super(age);
    }
    @Override
    void career(){
        System.out.println("I wanna be a Coder");
    }
    @Override
    void partner(){
        System.out.println("I like Iron man");
    }
}


package OOP5;
public class Daughter extends Parents{
    public Daughter(int age){
        super(age);
    }

    @Override
    void career(){
        System.out.println("I wanna be a Doctor");
    }
    @Override
    void partner(){
        System.out.println("I like Pepper Potts");
    }
}


package OOP5;
public class Main {
    public static void main(String[] args) {
        Son son = new Son(15);
        son.career();

        Daughter daughter = new Daughter(13);
        daughter.career();
    }
}
