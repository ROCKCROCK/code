import java.util.*;

public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        boolean quit = false;
        do {
            int a, b;
            int c;
            System.out.println("Enter 1st number -> ");
            a = sc.nextInt();
            System.out.println("Enter 2nd number -> ");
            b = sc.nextInt();
            System.out.println("-----------------------------");
            System.out.println("1.Addition");
            System.out.println("2.Subtraction");
            System.out.println("3.Multiplication");
            System.out.println("4.Division");
            System.out.println("-----------------------------");
            System.out.println("Enter the choice ->");
            c = sc.nextInt();
            sc.nextLine();
            System.out.println("-----------------------------");
            switch (c) {
                case 1:
                    System.out.println("Addition : " + (a + b));
                    break;
                case 2:
                    System.out.println("Subtraction : " + (a - b));
                    break;
                case 3:
                    System.out.println("Multiplication : " + (a * b));
                    break;
                case 4:
                    System.out.println("Division : " + (a / b));
                    break;

            }
            System.out.println("-----------------------------");
            System.out.println("Do you want to continue?(YES/NO)");
            String d = sc.nextLine();
            if ("YES".equals(d) || "yes".equals(d)) {
                quit = true;
                System.out.println("-----------------------------");
            } else
                quit = false;

        } while (quit);
        sc.close();
    }
}
