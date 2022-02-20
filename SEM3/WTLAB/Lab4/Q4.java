public class Q4 {
    public static void main(String args[]) {
        int esum = 0, ec = 0, oc = 0, osum = 0;
        for (int i = 0; i < args.length; i++) {
            int n = Integer.parseInt(args[i]);
            if (n % 2 == 0) {
                esum = esum + n;
                ec++;
            } else {
                osum = osum + n;
                oc++;
            }
        }
        System.out.println("ODD No. = " + oc);
        System.out.println("EVEN No. = " + ec);
        System.out.println("ODD SUM = " + osum);
        System.out.println("EVEN SUM = " + esum);
        System.out.println("GRAND TOTAL = " + (osum + esum));
    }
}
