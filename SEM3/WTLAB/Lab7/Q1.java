
class staticTest {
    int p;
    String n;
    static String category = "Game";

    staticTest(int cp, String cn) {
        p = cp;
        n = cn;
    }

    void display() {
        System.out.println(p + "\t" + n + "\t" + category);

    }

}

public class Q1 {
    public static void main(String[] args) {
        staticTest a = new staticTest(2000, "GTA5");
        staticTest b = new staticTest(1500, "COD");
        a.display();
        b.display();
    }
}
