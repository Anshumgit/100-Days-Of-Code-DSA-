package OOP2;

public class StaticBlock {
    static int a = 4;
    static int b;

    static {
        System.out.println("I am inside Static Block");
        b = a * 5;
    }

    public static void main(String[] args) {
        //this will awake the static{} block once
        StaticBlock obj = new StaticBlock();
        System.out.println(StaticBlock.a + " " + StaticBlock.b);

        b += 3;
        System.out.println(StaticBlock.a + " " + StaticBlock.b);

        StaticBlock obj1 = new StaticBlock();
        System.out.println(StaticBlock.a + " " + StaticBlock.b);
    }
}
