public class Conversion {
    private int num;
    private String Binary, Octagonal, Hexagonal;

    public Conversion(int num) {
        this.num = num;
        this.Binary = Integer.toBinaryString(num);
        this.Octagonal = Integer.toOctalString(num);
        this.Hexagonal = Integer.toHexString(num);
    }

    public String toBinary() {
        return num + " in binary is " + Binary;
    }
    public String toOctagonal() {
        return num + " in octagonal is " + Octagonal;
    }
    public String toHexagonal() {
        return num + " in hexagonal is " + Hexagonal;
    }
}
