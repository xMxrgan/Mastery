public class UserInput {
    private String input;
    private int x = 0, y = 0;
    private double xD, yD;
    private char operand = ' ';
    private boolean doubleX = false, doubleY = false;

    public UserInput(String input) {
        this.input = input;
        parseInput(input);
    }

    // Divide operations from numbers
    private void parseInput(String input) {
        int countX = 1, countY = 1;

        input = input.replaceAll("\\s", "");                    // Erase all spaces                   

        for (int i = 0; i < input.length(); i++) {              // Goes along all the string
            char c = input.charAt(i);                           // Check the single char

            if (Character.isDigit(c) && operand == ' ') {
                if (doubleX) {
                    x = x + (c - '0' / (countX * 10));
                } else {
                    x = (x * countX) + (c - '0');
                }
                countX *= 10;
            }

            if (Character.isDigit(c) && operand != ' ') {
                if (doubleY) {
                    y = y + (c - '0' / (countY * 10));
                } else {
                    y = (y * countY) + (c - '0');
                }
                countY *= 10;
            }

            switch (c) {
                case '+': operand = '+';
                    break;
                case '-': operand = '-';
                    break;
                case '*': operand = '*';
                    break;
                case 'x': operand = '*';
                    break;
                case ':': operand = '/';
                    break;
                case '/': operand = '/';
                    break;
                case '%': operand = '%';
                    break;
                case '.':
                case ',':
                    if (operand == ' ')                         // X number
                        xD = x;
                        doubleX = true;
                    if (operand != ' ')                         // Y number
                        yD = y;
                        doubleY = true;
                break;
                default: operand = ' ';
            }
        }
    }

    public float getX() {
        return x;
    }
    public void setX(int x) {
        this.x = x;
    }
    public float getY() {
        return y;
    }
    public void setY(int y) {
        this.y = y;
    }
    public char getOperand() {
        return operand;
    }
}
