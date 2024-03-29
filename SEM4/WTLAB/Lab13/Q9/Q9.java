import java.io.*;
import java.util.*;

public class Q9 {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int c;
        System.out.println("Enter details of Student :");
        System.out.print("Roll:");
        int roll = Integer.parseInt(sc.nextLine());
        System.out.print("Name:");
        String name = sc.nextLine();
        System.out.print("Subject:");
        String subname = sc.nextLine();
        System.out.print("Marks:");
        int marks = sc.nextInt();
        sc.close();
        FileWriter fout = new FileWriter("student.txt");
        FileInputStream fin = new FileInputStream("student.txt");
        System.out.println("Writing to file .........");
        fout.write("Roll : " + roll + "\nName : " + name + "\nSubject Name : " + subname + "\nMarks : " + marks);
        fout.close();
        System.out.println("Reading and Printing details from file .........");
        while ((c = fin.read()) != -1) {
            System.out.print((char) c);
        }
        fin.close();
    }
}