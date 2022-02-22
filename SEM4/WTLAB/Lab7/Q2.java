public class Q2 {

    int ns = 15;
    static int s = 30;

    Q2() {
        ns++;
        s++;
        System.out.println("Value of Non-static variable -> " + ns);
        System.out.println("Value of static variable -> " + s);
    }

    public static void main(String[] args) {
        Q2 a = new Q2();
        Q2 b = new Q2();
        Q2 c = new Q2();
        Q2 d = new Q2();
    }

}
