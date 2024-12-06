public class ScientificCalc {
    private double x, y;
    private char operand;

    public ScientificCalc(double x, char operand, double y) {
        this.x = x;
        this.operand = operand;
        this.y = y;
        result(this.x, this.operand, this.y);
    }
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