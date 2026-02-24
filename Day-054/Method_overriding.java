package OOP3.Polymorphism;

public class Method_overriding {
    int num;

    public Method_overriding(int num) {
        this.num = num;
    }

    @Override
    public String toString() {
        return "Method_overriding{" +
                "num=" + num +
                '}';
    }

    public static void main(String[] args) {
        Method_overriding obj = new Method_overriding(54);
        System.out.println(obj);

    }
}
