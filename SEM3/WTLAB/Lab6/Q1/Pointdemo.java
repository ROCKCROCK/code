import java.util.Scanner;

public class Pointdemo {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("------------Position 1------------ ");
        System.out.println("Enter the value x -> ");
        int x = sc.nextInt();
        System.out.println("Enter the value y -> ");
        int y = sc.nextInt();
        System.out.println("------------Position 2------------ ");
        System.out.println("Enter the value x1 -> ");
        int x1 = sc.nextInt();
        System.out.println("Enter the value y1 -> ");
        int y1 = sc.nextInt();
        Point a = new Point(x, y);
        Point b = new Point(x1, y1);
        System.out.println("------------Position 1------------ ");
        a.show();
        System.out.println("------------Position 2------------ ");
        b.show();
        System.out.println("---------------------------------- ");
        a.findDistance();
        a.findDistance(x1, y1);
        a.findDistance(b);
        sc.close();
    }
}
