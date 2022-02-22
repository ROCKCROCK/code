
import java.util.Scanner;

public class Equationdemo {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        Equation d = new Equation();
        System.out.println("Enter a->");
        a = sc.nextInt();
        System.out.println("Enter b->");
        b = sc.nextInt();
        System.out.println("Enter c->");
        c = sc.nextInt();
        d.setcoefficients(a, b, c);
        d.findRoots();
        System.out.println("+root is->" + d.r1);
        System.out.println("-root is->" + d.r2);
        sc.close();
    }

}
