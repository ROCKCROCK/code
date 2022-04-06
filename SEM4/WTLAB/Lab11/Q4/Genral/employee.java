package Q4.Genral;

public class employee {
    protected int empid = 1538;
    private String empname = "Naman";
    public double te;

    public void earnings(double basic) {
        te = basic + (basic * 0.8) + (basic * 0.15);
        System.out.println("Employee ID->" + empid);
    }
}
