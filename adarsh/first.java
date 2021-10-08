import java.util.Scanner;

public class first{
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("enter 2 numbers: ");
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println("before swapping: " + a +" " + b);
            a = a+b;
            b = a-b;
            a = a-b;
            System.out.println("after swapping: " + a +" " + b);
        }
    }
    