import java.util.Scanner;

class Account {
    double acc_no, Balance;

    void disp() {
        System.out.println("Your Account No. is->" + acc_no);
        System.out.println("Your Balance is->" + Balance);
    }
}

class Person extends Account {
    String name;
    double aadhar_no;

    void disp() {
        System.out.println("Your Name is->" + name);
        System.out.println("Your Aadhar No. is->" + aadhar_no);
        System.out.println("Your Account No. is->" + acc_no);
        System.out.println("Your Balance is->" + Balance);
    }
}

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Person[] a = new Person[5];
        for (int i = 0; i < 5; i++) {
            System.out.println("------------------------");
            a[i] = new Person();
            System.out.print("Enter Name ->");
            a[i].name = sc.nextLine();
            System.out.print("Enter Aadhar No. ->");
            a[i].aadhar_no = sc.nextInt();
            System.out.print("Enter Account No. ->");
            a[i].acc_no = sc.nextInt();
            System.out.print("Enter Balance ->");
            a[i].Balance = sc.nextInt();
            sc.nextLine();
        }
        System.out.println("----------- Displaying -------------");
        for (int i = 0; i < 5; i++) {
            a[i].disp();
            System.out.println("-------------------------------");
        }
        sc.close();
    }

}
