public class Main {
    public static void main(String[] args) throws Exception {
        int Num = 4;

        while (Num <= 10) {

            for (int i = 1; i <= Num; i ++) {
                for (int j = 1; j <= Num; j ++) {

                    if ((i == 1 && j == Num) || (i == Num && j == Num)) {
                        System.out.printf(" ");
                    } else {
                        if ((i == 1 || j == 1) || (i == Num || j == Num))  {
                            System.out.printf("@");
                        } else {
                            System.out.printf(" ");
                        }
                    }
                    
                }

                System.out.println();
            }

            System.out.println();
            Num ++;
        }

    }
}
