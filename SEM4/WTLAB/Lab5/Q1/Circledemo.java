
import java.util.Scanner;

public class Circledemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Radius->");
        Circle c = new Circle();
        c.radius = sc.nextInt();
        c.setDim(c.radius);
        c.findArea();
        c.perimeter();
        System.out.println("Diameter is : " + c.diameter);
        System.out.println("Area is : " + c.area);
        System.out.println("Perimeter is : " + c.perimeter);
        sc.close();
    }
}
