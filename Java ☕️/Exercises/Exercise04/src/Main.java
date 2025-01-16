
public class Main {
    public static void main(String[] args) {
        char Char = 'a';

        while (Char <= 'z') {

            for (int i = 1; i <= 10; i ++) {
                for (int j = 1; j <= 10; j ++ ) {

                    if ((i == 1 && j == 10) || (i == 10 && j == 10)) {
                        System.out.printf(" ");
                    } else {
                        if (i == 1 || i == 10 ||  j == 1 || j == 10) {
                            System.out.printf("%c", Char);
                        } else {
                            System.out.printf(" ");
                        }
                    }
                }
                System.out.println();
            }

            System.out.println();
            Char ++;
        }
    }
}
