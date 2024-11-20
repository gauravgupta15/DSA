// Create a class called Student with three private data members – studentName of type String, registerNumber of type int and a static variable noOfStudents of type int.

 

// Include a constructor for the class Student with two arguments studentName of type String and registerNumber of type int. Each time a student entry is made increment the static variable.

 

// Note : Text in bold corresponds to the input

 

// Sample Input & Output :

// Enter the student details :

// Enter the register number :

// 1

// Enter the name :

// JK

// Do you want to continue [ Yes / No ] :

// Yes

// Enter the register number :

// 2

// Enter the name :

// Murali

// Do you want to continue [ Yes / No ] :

// No

// Number of Students are : 2

// Details of student 1 :

// Register Number : 1

// Name : JK

// Details of student 2 :

// Register Number : 2

// Name : Murali

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] str = new String[100];
        int[] arr = new int[100];
        
        for(int i = 0; i < 100; i++) {
            System.out.println("Register Number: ");
            arr[i] = sc.nextInt();
            sc.nextLine(); // Consume the newline character
            
            System.out.println("Name: ");
            str[i] = sc.nextLine();

            System.out.println("Do you want to continue [Yes/No]: ");
            String c = sc.next();
            
            if(c.equals("No")) {
                break;
            }
        }
        
         // Displaying the entered data
        System.out.println("Entered data:");
        for(int i = 0; i < 100; i++) {
            if(str[i] != null) {
                System.out.println("Register Number: " + arr[i]);
                System.out.println("Name: " + str[i]);
            } else {
                break; // Exit the loop if encountered null value
            }
        }
        
        
    }
}
