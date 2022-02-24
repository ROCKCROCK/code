final class A {
    public void display() {
        System.out.println("jod");
    }
}

class B extends A {
    public void display() {
        System.out.println("jod jod");
    }
}

public class Q6_III {
    public static void main(String[] args) {
        B a = new B();
        a.display();
    }
}
