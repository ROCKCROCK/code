import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        int myNum1, myNum2, mySum;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Num 1:");
        myNum1 = sc.nextInt();
        System.out.println("Enter Num 2:");
        myNum2 = sc.nextInt();
        mySum = myNum1 + myNum2;
        System.out.println("Sum is: " + mySum);
        sc.close();
    }
}
