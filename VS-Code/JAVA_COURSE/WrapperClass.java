import java.util.Scanner;

public class WrapperClass {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter an integer:");
        int input = scanner.nextInt();
        
        Integer integerObj = Integer.valueOf(input);
        
        System.out.println("The binary equivalent of " + input + " is " + integerObj.toBinaryString(input));
        System.out.println("The hexadecimal equivalent of " + input + " is " + Integer.toHexString(input));
        System.out.println("The octal equivalent of " + input + " is " + Integer.toOctalString(input));
        System.out.println("Byte value of " + input + " is " + integerObj.byteValue());
        System.out.println("Short value of " + input + " is " + integerObj.shortValue());
        System.out.println("Long value of " + input + " is " + integerObj.longValue());
        System.out.println("Float value of " + input + " is " + integerObj.floatValue());
        System.out.println("Double value of " + input + " is " + integerObj.doubleValue());
  
    }
}
