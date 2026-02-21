package OOP2;

public class Singleton {
    //when you want 1 object of the class
    private Singleton(){

    }
    private static Singleton instance;

    public static Singleton getInstance(){
        //check wheather 1 obj is created or not
        if(instance == null){
            instance = new Singleton();
        }

        return instance;
    }
}


// Main class 
package OOP2;

public class Main {
    public static void main(String[] args) {
        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();
        Singleton obj3 = Singleton.getInstance();

        // all 3 reference variable pointing to just one object

    }
}
