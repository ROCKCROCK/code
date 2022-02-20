class SBM {
    static String n = "Naman";
    static {
        System.out.println("Static block is intiliazied ");
    }

    static void CName() {
        n = "Rockcrock";
    }

    void SName() {
        System.out.println(n);

    }

}

public class Q3 {
    public static void main(String[] args) {
        SBM a = new SBM();
        System.out.print("My name is-> ");
        a.SName();
        SBM.CName();

        SBM b = new SBM();
        System.out.print("My changed name is-> ");
        b.SName();

    }
}
