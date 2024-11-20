// import JAVA_COURSE.*;
import java.util.Scanner;

public class findIndex {
    public static int findINdex(int[] arr, int n, int tar) {
        int s=0, e = n-1;
        int findex=-1;
        while(s<e) {

            int mid = s+(e-s)/2;

            if(arr[mid]==tar) {
                findex=mid;
                s=mid+1;






























































                
            }
        }
        return -1;
    } 
    public static void main(String[]  args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int[] arr = new int[100];
        for(int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }

        int tar;
    
        System.out.println("Enter the target: ");
        tar=sc.nextInt();

        findINdex(arr, n, tar);
    }
}