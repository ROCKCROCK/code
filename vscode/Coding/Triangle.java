
class NoTriangleFormException extends Exception {
    String message;

    NoTriangleFormException(String str) {
        message = str;
    }

    public String toString() {
        return ("Custom Exception Occurred : " + message);
    }
}

public class Triangle {
    public int a;
    public int b;
    public int c;

    public Triangle(int a, int b, int c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public double Find_area_90() {
        double s = (a + b + c) / 2;
        double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    }

    public double Find_perimeter() {
        double perimeter = a + b + c;
        return perimeter;
    }

    public static void main(String[] args) {
        Triangle triangle = new Triangle(1, 2, 3);
        try {
            if ((triangle.a + triangle.b < triangle.c) && (triangle.b + triangle.c < triangle.a)
                    && (triangle.c + triangle.a < triangle.b)) {
                throw new NoTriangleFormException("not a Valid triangle");
            } else {
                System.out.println(triangle.Find_area_90());
                System.out.println(triangle.Find_perimeter());
            }
        } catch (NoTriangleFormException e) {
            System.out.println(e);
        }

    }
}
