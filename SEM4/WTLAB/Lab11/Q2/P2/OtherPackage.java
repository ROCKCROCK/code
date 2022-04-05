package Q2.P2;

public class OtherPackage {
    public OtherPackage() {
        Q2.P1.Protection p = new Q2.P1.Protection();
        System.out.println("other package constructor");
        // System.out.println("n = "+p.n);//same class or same package only
        // System.out.println("n_pri = "+n_pri);//same class only
        // System.out.println("n_pro = "+p.n_pro);//class, subclass or package only
        System.out.println("n_pub = " + p.n_pub);
    }
}