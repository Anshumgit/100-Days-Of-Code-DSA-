package OOP3.Polymorphism;

public class Method_overloading {
    double sum(double a , int b){ //type casting
        return a+b;
    }
    int sum(int a , int b){
        return a+b;
    }
    int sum(int a , int b,int c){
        return a+b+c;
    }
    public static void main(String[] args) {
        Method_overloading obj = new Method_overloading();
        System.out.println(obj.sum(2,3));;
        System.out.println(obj.sum(6,9,1));;

    }
}
