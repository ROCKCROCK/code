import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        System.out.println("The Array is : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter the index to access the array : ");
        int index = sc.nextInt();
        sc.close();
        try {
            System.out.println(arr[index] + " is at index " + index + " of the array");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }
        System.out.println("....End of Program....");
    }
}