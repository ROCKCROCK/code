import java.util.Scanner;

class Shape {
    float area;

    void showArea() {
        System.out.println(area);
    }
}

class Circle1 extends Shape {
    float r;

    void circlearea() {
        area = (float) 3.14 * r * r;
        showArea();
    }
}

class Rectangle extends Shape {
    float a, b;

    void recarea() {
        area = a * b;
        showArea();
    }
}

public class Q7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Circle1 c = new Circle1();
        System.out.print("Enter Radius->");
        c.r = sc.nextInt();
        System.out.print("Area of Circle is->");
        c.circlearea();
        Rectangle d = new Rectangle();
        System.out.print("Enter Side a->");
        d.a = sc.nextInt();
        System.out.print("Enter Side b->");
        d.b = sc.nextInt();
        System.out.print("Area of Rectangle is->");
        d.recarea();
        sc.close();
    }
}
