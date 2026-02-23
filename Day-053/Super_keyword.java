// class 1
package OOP3;

public class Box {
    double l , w , h;
    Box(){
        this.l = -1;
        this.w = -1;
        this.h = -1;
    }


    public Box(double l, double w, double h) {
        this.l = l;
        this.w = w;
        this.h = h;
    }
}



// extended class 2 
package OOP3;

public class BoxWeight extends Box {
    double weight;
    public BoxWeight(double l , double w , double h,double weight) {
        super(l , w , h);
        this.weight = weight;
    }
}

// main class
package OOP3;

public class Main {
    public static void main(String[] args) {
        BoxWeight box1 = new BoxWeight(2 , 3 , 4 , 8);
        System.out.println(box1.l);
        System.out.println(box1.w);
        System.out.println(box1.h);
        System.out.println(box1.weight);
    }
}

