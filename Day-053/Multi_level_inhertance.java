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

//class 2

package OOP3;

public class BoxWeight extends Box {
    double weight;

    BoxWeight(){
        super();
        this.weight = weight;
    }

    BoxWeight(BoxWeight other){
        super(other);
        this.weight = weight;
    }

    public BoxWeight(double side, double weight) {
        super(side);
        this.weight = weight;
    }

    public BoxWeight(double l , double h , double w , double weight) {
        super(l , h , w);
        this.weight = weight;
    }
}

//class 3
package OOP3;

public class BoxPrice extends BoxWeight{
        double cost;

        BoxPrice(){
            super();
            this.cost = -1;
        }

        BoxPrice(BoxPrice other){
            super(other);
            this.cost = other.cost;
        }

        public BoxPrice(double side ,double weight , double cost) {
            super(side, weight);
            this.cost = cost;
        }

        public BoxPrice(double l , double h , double w ,double weight , double cost) {
                super(l , h , w , weight);
                this.cost = cost;
        }
}


// Main class
package OOP3;

public class Main {
    public static void main(String[] args) {
        BoxPrice Box = new BoxPrice(5 , 8 , 200);
    }
}

