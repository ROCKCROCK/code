interface inter {
    int x = 14;

    void disp();
}

class student implements inter {
    public void disp() {
        System.out.println(x);
    }
}

public class q3 {
    public static void main(String[] args) {
        student obj = new student();
        obj.disp();
        x = 17;
        obj.disp();
    }
}
