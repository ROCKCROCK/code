
class OverloadArea {
    double area(double r) {
        if (r < 0) {
            return -1;
        }
        return Math.PI * (r * r);
    }

    double area(double l, double b) {
        if (l < 0 || b < 0) {
            return -1;
        }
        double areaOfRectangle = l * b;
        return areaOfRectangle;
    }

    double area(int a, double b, double c) {
        double temp = (a + b + c);
        double s = temp / 2;
        double areaOfTriangle = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return areaOfTriangle;
    }
}

public class Q5 {
    public static void main(String[] args) {
        OverloadArea a = new OverloadArea();
        System.out.println("Area of Circle-> " + a.area(15));
        System.out.println("Area of Rectangle-> " + a.area(15, 30));
        System.out.println("Area of Triangle-> " + a.area(2, 4, 3));
    }
}