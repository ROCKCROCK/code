interface A {
    void math1();

    void math2();
}

interface B extends A {
    void math3();
}

class student implements B {

    public void math1() {
        System.out.println("In function math1() ");
    }

    public void math2() {
        System.out.println("In function math2() ");
    }

    public void math3() {
        System.out.println("In function math3() ");
    }
}

public class Q6 {
    public static void main(String[] args) {
        student a = new student();
        a.math1();
        a.math2();
        a.math3();
    }
}
