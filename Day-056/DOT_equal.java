package OOP4;

public class ObjectDemo {
    int num;
    float gpa;
    public ObjectDemo(int num , float gpa) {
        this.num = num;
        this.gpa = gpa;
    }

    @Override
    public boolean equals(Object obj) {
        return super.equals(obj);
    }

    public static void main(String[] args) {
        ObjectDemo obj1 = new ObjectDemo(12,78.85f);
        ObjectDemo obj2 = obj1;
        ObjectDemo obj3 = new ObjectDemo(13,90.45f);
        if( obj1 == obj2 ){
            System.out.println("variable are pointing to same object");
        }
        
        if(obj1.equals(obj1)){
            System.out.println("Contents are same");
        }
        else{
            System.out.println("Contents are not same");
        }
    }
}
