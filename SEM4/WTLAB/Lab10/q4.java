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

public class q4 {
    public static void main(String[] args) {
        student obj = new student();
        System.out.println("\nFrom student obj :");
        obj.disp();
        obj.nonIfaceMethod();
        Inter ref;
        ref = obj;
        System.out.println("\nFrom interface reference :");
        ref.disp();
        ref.nonIfaceMethod();
    }
}
