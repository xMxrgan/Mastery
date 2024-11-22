import java.util.Scanner;

public class Game {
    private Scanner userInput;
    private Symbol symbol;

    private char[][] squares = {
            { '1', '2', '3' },
            { '4', '5', '6' },
            { '7', '8', '9' }
    };

    public Game(Scanner userInput) {
        this.userInput = userInput;
    }

    public void PlayerMove(int userInput) {

        if (squares[0][0] != 'X' || squares[0][0] != 'O') {

        }
    }

    public void board() {
        System.out.println(squares[0][0] + "|" + squares[0][1] + "|" + squares[0][2]);
        System.out.println("-+-+-");
        System.out.println(squares[1][0] + "|" + squares[1][1] + "|" + squares[1][2]);
        System.out.println("-+-+-");
        System.out.println(squares[2][0] + "|" + squares[2][1] + "|" + squares[2][2]);
    }

}
