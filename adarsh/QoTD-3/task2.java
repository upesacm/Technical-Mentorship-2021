import java.util.Scanner;
public class task2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
               System.out.println("enter a number: ");
               int a = sc.nextInt();
               for (int i=a-1;i>=0;i--)
               {
                   for (int j=0;j<=i;j++){
                   System.out.print("*");
               }
                   System.out.println();
        }

     }
}


