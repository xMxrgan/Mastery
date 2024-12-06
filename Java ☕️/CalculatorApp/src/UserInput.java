public class UserInput {
    private String input;
    private int x = 0, y = 0;
    private char operand = ' ';

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
                x = (x * countX) + (c - '0');
                countX *= 10;
            }

            if (Character.isDigit(c) && operand != ' ') {
                y = (y * countY) + (c - '0');
                countY *= 10;
            }

            switch (c) {
                case '+': operand = '+';
                case '-': operand = '-';
                case '*': operand = '*';
                case 'x': operand = '*';
                case ':': operand = '/';
                case '/': operand = '/';
                case '%': operand = '/';
                case '.':
                case ',':
                    if (operand == ' ')                         // X number
                    double dX = (double) x;
                    countX;
                    if (operand != ' ')                         // Y number
                    countY;

                default: operand = ' ';
            }




        }
    }

    private int sum(int x, int y) {
        return x + y;
    }

    public int getX() {
        return x;
    }
    public void setX(int x) {
        this.x = x;
    }
    public int getY() {
        return y;
    }
    public void setY(int y) {
        this.y = y;
    }



}
