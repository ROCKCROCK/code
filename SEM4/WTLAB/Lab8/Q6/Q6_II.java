class A {
    public final void display() {
        System.out.println("jod");
    }
}

class B extends A {
    public final void display() {
        System.out.println("jod jod");
    }
}

public class Q6_II {
    public static void main(String[] args) {
        B a = new B();
        a.display();
    }
}
