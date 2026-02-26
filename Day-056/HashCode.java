package OOP4;

public class HashCode extends Dot_equal {
    int num ;
    float gpa;

    HashCode(int num , float gpa){
        this.num = num;
        this.gpa = gpa;
    }
    @Override
    public int hashCode() {
        return super.hashCode();
    }

    public static void main(String[] args) {
        HashCode obj1 = new HashCode(54 , 9.6f);
        System.out.println(obj1.hashCode());
    }
}
