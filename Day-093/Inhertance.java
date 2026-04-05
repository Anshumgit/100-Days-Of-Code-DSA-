package Inhertance;
class Persons{
    int id ;
    String name;

    Persons(int id , String name){
        this.id = id;
        this.name = name;
    }
}

class Students extends Person{
    double m1,m2,m3;
    double total;
    double per;
    Students(int id , String name , double m1,double m2,double m3){
        super(id,name);
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }

    void calculate(){
        total = m1+m2+m3;
        per = total/3;
    }
}

class Show extends Students{
    Show(int id, String name, double m1, double m2, double m3) {
        super(id, name, m1, m2, m3);
    }

    void showAllInfo(){
        calculate();
        System.out.println("ID = " + id);
        System.out.println("Name = "+ name);
        System.out.println("M1 = " +  m1);
        System.out.println("M2 = " +  m2);
        System.out.println("M3 = " +  m3);
        System.out.println("Total is = " + total);
        System.out.println("Percentage is = " +  per);
    }

}

public class Exp1 {
    public static void main(String[] args) {
        Show show1 = new Show(1 , "Anshum" , 89 , 90 , 95);
        show1.showAllInfo();
    }
}
