
public class Circle {
    int radius;
    float diameter, area, perimeter;

    void setDim(float radius) {
        diameter = 2 * radius;
    }

    void findArea() {
        area = (float) (3.14 * radius * radius);
    }

    void perimeter() {
        perimeter = (float) (2 * 3.14 * radius);
    }
}
