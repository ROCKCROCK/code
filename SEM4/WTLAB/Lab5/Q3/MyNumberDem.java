
import java.util.Scanner;

public class MyNumberDem {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        MyNumber m = new MyNumber();
        System.out.println("Enter number->");
        a = sc.nextInt();
        m.setValue(a);
        System.out.println("Even : " + m.isEven());
        System.out.println("Prime : " + m.isPrime());
        System.out.println("Sum of digits : " + m.sumOfDigits());
        System.out.println("Factorial : " + m.findFactorial());
        sc.close();
    }
}
