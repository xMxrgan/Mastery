import java.util.Scanner;

public class MainConversion {

    public static void main(String[] args) throws Exception {
        int Num;
        Scanner scanner = new Scanner(System.in);

        do {
            Num = scanner.nextInt();
        } while (Num < 0);

        Conversion conversion = new Conversion(Num);

        System.out.println(conversion.toBinary());
        System.out.println(conversion.toOctagonal());
        System.out.println(conversion.toHexagonal());
        
        scanner.close();
    }
}
