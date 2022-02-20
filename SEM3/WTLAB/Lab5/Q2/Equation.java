
public class Equation {
    int a, b, c;
    double r1, r2;

    void setcoefficients(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void findRoots() {
        r1 = ((-b + Math.sqrt((b * b) - 4 * a * c)) / (2 * a));
        r2 = ((-b - Math.sqrt((b * b) - 4 * a * c)) / (2 * a));
    }
}