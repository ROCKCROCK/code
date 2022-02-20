
public class Point {
    int x, y;

    Point() {
        System.out.println("Constructor Called");
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    Point(Point c) {
        System.out.println("Copy Constructor Called");
        x = c.x;
        y = c.y;
    }

    void findDistance() {
        float temp = x * x - y * y;

        float result = (float) Math.sqrt(Math.abs(temp));

        System.out.println("Distance is(normally)-> " + result);
    }

    void findDistance(int x1, int y1) {

        float temp = x1 * x1 - y1 * y1;

        float result = (float) Math.sqrt(Math.abs(temp));

        System.out.println("Distance is (using 2nd points)-> " + result);

    }

    void findDistance(Point o) {
        double dist = Math.sqrt(Math.pow((x - o.x), 2) + Math.pow((y - o.y), 2));
        System.out.println("Distance is (using object passing) -> " + dist);
    }

    void show() {
        System.out.println("X is " + x);
        System.out.println("Y is " + y);

    }

}
