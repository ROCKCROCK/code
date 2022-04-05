interface Inter {
    void disp();
}

class student implements Inter {
    public void disp() {
        System.out.println("In the interface method");
    }

    void nonIfaceMethod() {
        System.out.println("In the non-interface method");
    }
}

public class Q5 {
    public static void main(String[] args) {
        student a = new student();
        System.out.println("\nFrom student obj :");
        a.disp();
        a.nonIfaceMethod();
        Inter ref;
        ref = a;
        System.out.println("\nFrom interface reference :");
        ref.disp();
        ref.nonIfaceMethod();
    }
}