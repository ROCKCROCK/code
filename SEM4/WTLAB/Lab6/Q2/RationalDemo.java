import java.util.*;

public class RationalDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("------------Rational NO. 1------------ ");
        System.out.println("Enter Numerator -> ");
        int x1 = sc.nextInt();
        System.out.println("Enter Denominator-> ");
        int y1 = sc.nextInt();
        System.out.println("------------Rational NO. 2------------ ");
        System.out.println("Enter Numerator -> ");
        int x2 = sc.nextInt();
        System.out.println("Enter Denominator -> ");
        int y2 = sc.nextInt();
        Rational r1 = new Rational(x1, y1);
        Rational r2 = new Rational(x2, y2);
        Rational result = new Rational(0, 0);
        System.out.println("--------------------------------------- ");
        result = r1.add(r2);
        System.out.println("After Additon -> " + result.p + "/" + result.q);

        result = r1.subtract(r2);
        System.out.println("After Subtraction  -> " + result.p + "/" + result.q);

        result = r1.multiply(r2);
        System.out.println("After Multiplication  ->" + result.p + "/" + result.q);

        result = r1.divide(r2);
        System.out.println("After Divide  -> " + result.p + "/" + result.q);
        sc.close();
    }
}