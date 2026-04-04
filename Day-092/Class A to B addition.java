import java.util.*;

class A{
        Scanner sc = new Scanner(System.in);
        int a;
        int b;
        void acceptData(){
            System.out.println("Enter value A:");
            a = sc.nextInt();
            System.out.println("Enter value B:");
            b = sc.nextInt();
        }
        void cal(A obj){
            a =  a + obj.a;
            b =  b + obj.b;
        }
}
public class exp {

    static public void main() {
        A obj1 = new A();
        A obj2 = new A();

        obj1.acceptData();
        obj2.acceptData();

        int res = obj2.cal(obj1);
        System.out.println("A a = "+ obj2.a);
        System.out.println("B b = "+ obj2.a);
    }
}
