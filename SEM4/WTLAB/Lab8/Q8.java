abstract class student {
    double rollno = 1538, regno = 6453;

    abstract void course();
}

class kiitian extends student {

    void course() {
        System.out.println("Your Roll Number is->" + rollno);
        System.out.println("Your Registration Number is->" + regno);
    }
}

public class Q8 {
    public static void main(String[] args) {
        student a = new kiitian();
        a.course();
    }
}
