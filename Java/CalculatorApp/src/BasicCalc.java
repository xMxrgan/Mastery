public class BasicCalc {
    private double x, y;
    private char operand;

    public BasicCalc (int x, char operand, int y) {
        this.x = x;
        this.operand = operand;
        this.y = y;
        result(this.x, this.operand, this.y);
    }
    public BasicCalc (double x, char operation, double y) {
        this.x = x;
        this.operand = operation;
        this.y = y;
    }

    public void result(double x, char operand, double y) {
        switch (operand) {
            case '+': System.out.println(x + y);
            case '-': System.out.println(x - y);
            case '*': System.out.println(x * y);
            case '/': System.out.println(x / y);
            case '%': System.out.println(x % y);
            default: System.out.println("Something wrong");
        }
    }

}
