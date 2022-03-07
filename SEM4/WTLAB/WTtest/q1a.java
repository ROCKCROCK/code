import java.util.Scanner;

public class q1a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        boolean quit = false;
        do {
            int a, b;
            int c;
            System.out.print("Enter 1st number -> ");
            a = sc.nextInt();
            System.out.print("Enter 2nd number -> ");
            b = sc.nextInt();
            System.out.println("-----------------------------");
            System.out.println("1.Addition");
            System.out.println("2.Subtraction");
            System.out.println("3.Multiplication");
            System.out.println("-----------------------------");
            System.out.print("Enter the choice ->");
            c = sc.nextInt();
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
            }
            System.out.println("-----------------------------");
            System.out.println("Do you want to continue?(1 for YES/2 for NO)");
            int d = sc.nextInt();
            if (d == 1) {
                quit = true;
                System.out.println("-----------------------------");
            } else
                quit = false;

        } while (quit);
        sc.close();
    }
}
