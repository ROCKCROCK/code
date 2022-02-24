
class A {
    int l, w;

    A(int a, int b) {
        l = a;
        w = b;
    }
}

class B extends A {
    int h;

    B(int a, int b, int c) {
        super(a, b);
        h = c;
    }

    void show() {
        System.out.println("A is -> " + l);
        System.out.println("B is -> " + w);
        System.out.println("C is -> " + h);
    }
}

public class Q3 {
    public static void main(String[] args) {
        B a = new B(10, 20, 30);
        a.show();
    }
}
