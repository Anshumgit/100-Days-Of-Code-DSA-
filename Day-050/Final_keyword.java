package OOP1;

public class Final_keyword {
    public static void main(String[] args) {
        final A Anshum = new A("Anshum");
        System.out.println(Anshum.name);
        Anshum.name = "Anshum Mankar";

        //When a non primitive is final , you cannot reassign it;
        // Anshum = new A("New Object");
        System.out.println(Anshum.name);
    }

    public static class A{
        final int num = 10;
        String name;

        A(String name){
            this.name = name;
        }
    }
}
