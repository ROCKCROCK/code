class A {
    void print() {
        System.out.println("Starting...");
    }
}

class B extends A {
    void print() {
        System.out.println("Dynamic Method Dispatch");
    }
}

public class Q1 {
    public static void main(String[] args) {
        A a = new B();
        a.print();
    }
}
