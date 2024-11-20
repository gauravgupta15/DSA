import java.util.Scanner;
public class Wrapper2 {
    

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the binary number:");
        String binaryStr = scanner.nextLine();
        int binaryInt = Integer.parseInt(binaryStr, 2);
        System.out.println("Enter the octal number:");
        String octalStr = scanner.nextLine();
        int octalInt = Integer.parseInt(octalStr, 8);
        System.out.println("Enter the hexadecimal number:");
        String hexStr = scanner.nextLine();
        int hexInt = Integer.parseInt(hexStr, 16);
        
        System.out.println("The integer value of the binary number " + binaryStr + " is " + binaryInt);
        System.out.println("The integer value of the octal number " + octalStr + " is " + octalInt);
        System.out.println("The integer value of the hexadecimal number " + hexStr + " is " + hexInt);
        
        scanner.close();
    }


}
