public class Q4 {
    int c;

    Q4() {
        c = 0;

    }

    Q4(int a) {
        c = a;

    }

    void show() {
        System.out.println(c);
    }

    public static void main(String[] args) {

        System.out.print("Normally->  ");
        Q4 a = new Q4();
        a.show();
        System.out.print("parameterized ->  ");
        Q4 b = new Q4(10);
        b.show();
    }
}
