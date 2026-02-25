package OOP4;

public class Private {
    private int num;
    String name;
    int[] arr;

    public Private(int num, String name) {
        this.num = num;
        this.name = name;
        this.arr = new int[num];
    }

    public void setter(int num){
        this.num = num;
    }

    public int getter(){
        return num;
    }

    public static void main(String[] args) {
        Private obj = new Private(10 , "Anshum");

        obj.setter(15);
        System.out.println(obj.getter());
    }

}
