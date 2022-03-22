abstract class Base {
    abstract void fun();
}

class Der extends Base {
    void fun() {
        System.out.println("Derived fun() called");
    }
}

public class Q2 {
    public static void main(String[] args) {

        Base b = new Der();
        b.fun();
    }
}
