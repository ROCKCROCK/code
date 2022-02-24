
abstract class Shape {
    double radius;

    void values(double r) {
        radius = r;
    }

    double getR() {
        return radius;
    }

    abstract double Area();
}

class Circle extends Shape {
    double Area() {
        return Math.PI * (getR() * getR());
    }
}

class Square extends Shape {
    double Area() {
        return getR() * getR();
    }
}

class Triangle extends Shape {
    double Area() {
        return Math.sqrt(3) * 0.25 * getR() * getR();
    }
}

public class Q5 {
    public static void main(String[] args) {
        Shape shape;

        Circle crcl = new Circle();

        shape = crcl;

        shape.values(6);

        System.out.println("Area of Circle -> " + shape.Area());

        Square sq = new Square();

        shape = sq;

        shape.values(6);

        System.out.println("Area of Square -> " + shape.Area());

        Triangle tr = new Triangle();
        shape = tr;

        shape.values(6);
        System.out.println("Area of Triangle -> " + shape.Area());
    }
}
