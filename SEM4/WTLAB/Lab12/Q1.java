import java.util.*;

public class Q1 {
    public static void main(String arg[]) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number : ");
        a = sc.nextInt();
        System.out.print("Enter second number : ");
        b = sc.nextInt();
        try {
            c = a / b;
            System.out.println("Result : " + c);
        } catch (ArithmeticException e) {
            System.out.println("Error : " + e);
        }
        System.out.println("....End of Program :(....");
    }
}
