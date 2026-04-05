
import java.io.*;


class Student implements Serializable{
    int id;
    String name;
    double per;

    public Student(int id, String name, double per) {
        this.id = id;
        this.name = name;
        this.per = per;
    }

    @Override
    public String toString() {
        return id+" "+name+"Per is:"+per;
    }
}

public class SerializableExample {
    public static void main(String[] args) throws Exception{
       ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("E:\\Hello.dat"));
        Student s1 = new Student(1, "Anshum " , 89.90);
        oos.writeObject(s1);
        oos.close();

        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("E:\\Hello.dat"));
        Student s2 = (Student)ois.readObject();
        System.out.println(s2.id);
        System.out.println(s2.per);
        System.out.println(s2.name);
        System.out.print(s2.toString());
        ois.close();

    }
}


