// class 1

package OOP3;

public class Box {
    double l , w , h;
    Box(){
        this.l = -1;
        this.w = -1;
        this.h = -1;
    }

    Box(double side){
        this.l = side;
        this.w = side;
        this.h = side;
    }

    public Box(Box other){
        this.l = other.l;
        this.w = other.w;
        this.h = other.h;
    }

    public Box(double l, double h, double w) {
        this.l = l;
        this.w = w;
        this.h = h;
    }
}


// class 2
package OOP3;

public class BoxColor extends Box{
    String color;
    public BoxColor(String color){
        this.color = color;
    }

    public BoxColor(double l , double h , double w , String color){
        super(l , h , w);
        this.color = color;
    }

    public void display(){
        System.out.println(this.l + " " + this.h + " " + this.w + " " + this.color);
    }
}

//Main class
package OOP3;

public class Main {
    public static void main(String[] args) {
        BoxColor box = new BoxColor( 8, 6 , 9, "Red");
        box.display();
    }
}
