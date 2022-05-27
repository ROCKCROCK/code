import java.io.*;

interface IntOperations {

    public void isPositive();

    public void isNegative();

    public void isEvenOdd();

    public void isPrime();

    public void factorial();

    public void sumOfDigits();

}

class MyNumber implements IntOperations {

    private int num;

    MyNumber() {

        num = 0;

    }

    MyNumber(int num) {

        this.num = num;

    }

    public void isNegative() {

        if (num < 0)
            System.out.println("\nNegative Number");

    }

    public void isPositive() {

        if (num > 0)
            System.out.println("\nPositive Number");

    }

    public void isEvenOdd() {

        if (num % 2 == 0)
            System.out.println("\nEven Number");

        else
            System.out.println("\nOdd Number");

    }

    public void isPrime() {

        int i = 2;

        while (i != num) {

            if (num % i == 0) {

                System.out.println("\nNon-Prime Number");
                break;

            }
            i++;

        }
        if (num == i)
            System.out.println("\nPrime Number");
    }

    public void factorial() {

        int pr = 1, i = 1;

        while (i <= num)
            pr *= i++;

        System.out.println("\nFactorial is -> " + pr);

    }

    public void sumOfDigits() {

        int sum = 0;
        int i = num;

        while (i != 0) {

            sum += (i % 10);
            i = i / 10;

        }

        System.out.println("\nSum Of The Digits Is -> " + sum);

    }

    public static void main(String[] arg) throws IOException {

        int num = Integer.parseInt(arg[0]);
        BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
        // BufferedReader to accept the choice from the user.
        MyNumber nks = new MyNumber(num);
        while (true) {
            System.out.println("\n**************************Menu**************************");
            System.out.println("\n1->Negative");
            System.out.println("\n2->Positive");
            System.out.println("\n3->Even/Odd");
            System.out.println("\n4->Prime");
            System.out.println("\n5->Factorial");
            System.out.println("\n6->Sum of digits");
            System.out.println("\n7->Exit");
            System.out.println("\n********************************************************");
            System.out.println("Enter Choice->");
            int choice = Integer.parseInt(b.readLine());
            System.out.println("\n********************************************************");
            switch (choice) {

                case 1:
                    nks.isNegative();
                    break;

                case 2:
                    nks.isPositive();
                    break;

                case 3:
                    nks.isEvenOdd();
                    break;

                case 4:
                    nks.isPrime();
                    break;

                case 5:
                    nks.factorial();
                    break;

                case 6:
                    nks.sumOfDigits();
                    break;
                case 7:
                    System.exit(0);
                    break;

                default:
                    System.out.println("Invalid !!!!!!!!");
                    break;

            }

        }
    }

}