public class Q3 {
    public static void main(String[] args) {
        String s = "Gym is my Life";
        System.out.println("Base string : " + s);
        StringBuffer s1 = new StringBuffer("Hi, ");
        System.out.println("Append : " + s1.append(s));// a
        System.out.println("Insert : " + s1.insert(14, "Best "));// b
        s1.delete(0, 4);
        System.out.println("Delete : " + s1.delete(10, 15));// c
        System.out.println("Capacity now : " + s1.capacity());// e
        s1.ensureCapacity(92);// d
        System.out.println("---Ensure Capacity---\nCapacity now : " + s1.capacity());
        System.out.println("Reverse : " + s1.reverse());// f
    }
}
