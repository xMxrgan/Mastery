public class BinaryNumber {
    private int num;
    private String binaryRepresentation;

    // Constructor
    public BinaryNumber(int num) {
        this.num = num;
        this.binaryRepresentation = Integer.toBinaryString(num); // Convert number to binary
    }

    // Override the toString method to display the binary representation

    public String toString() {
        return "Your binary number is: " + binaryRepresentation;
    }
}
