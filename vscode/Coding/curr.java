import java.util.*;

abstract class currency {
    abstract void getConvertor();
}

class dollars extends currency {
    float dollar;

    dollars(float dollar1) {
        dollar = dollar1;
    }

    void getConvertor() {
        float inr = dollar * 78;
        System.out.println("Dollar =" + dollar + " equal to INR=" + inr);
    }
}

class rupees extends currency {
    float rupee;

    rupees(float rupee1) {
        rupee = rupee1;
    }

    void getConvertor() {
        float usd = rupee / 78;
        System.out.println("Rupee =" + rupee + " equal to Dollars=" + usd);
    }
}

class euros extends currency {
    float euro;

    euros(float euro1) {
        euro = euro1;
    }

    void getConvertor() {
        double inr = (euro * 79.50);
        System.out.println("Euro =" + euro + " equal to INR=" + inr);
    }
}

public class curr {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        float inr, usd, euro;
        System.out.println("Enter dollars to convert into Rupees:");
        usd = in.nextInt();
        System.out.println("Enter Rupee to convert into Dollars:");
        inr = in.nextInt();
        System.out.println("Enter euro to convert into Rupees:");
        euro = in.nextInt();
        dollars a = new dollars(usd);
        a.getConvertor();
        rupees b = new rupees(inr);
        b.getConvertor();
        euros c = new euros(euro);
        c.getConvertor();
        in.close();

    }
}
