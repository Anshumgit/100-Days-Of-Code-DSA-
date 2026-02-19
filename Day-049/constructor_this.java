package OOP1;

public class constructor_this {
    public static void main(String[] args){
        Student Anshum = new Student();
        Student Rahul = new Student(15 , "Rahul" , 87.56f);
        Student Aman = new Student(Anshum);

        System.out.println(Anshum.rno);
        System.out.println(Anshum.name);
        System.out.println(Anshum.marks);
        System.out.println();
        System.out.println(Rahul.rno);
        System.out.println(Rahul.name);
        System.out.println(Rahul.marks);
        System.out.println();
        System.out.println(Aman.rno);
        System.out.println(Aman.name);
        System.out.println(Aman.marks);


    }


    public static class Student{
        int rno;
        String name;
        float marks;

        // one of the use of the constructor
        Student(){
            this (50 , "Anshum " , 94.40f);
        }
        
        // parameterize constuctor
        Student(int rno , String name , float marks){
            this.rno = rno;
            this.name = name;
            this.marks = marks;
        }
        
        // copy constructor
        Student(Student other){
            this.rno = other.rno;
            this.name = other.name;
            this.marks = other.marks;
        }
    }
}
