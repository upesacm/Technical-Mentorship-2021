 import java.util.Scanner;
public class task1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double root1,root2,real,imaginary;
        System.out.println("enter first number: ");
        double a = sc.nextDouble();
        System.out.println("enter second number: ");
        double b = sc.nextInt();
        System.out.println("enter third number: ");
        double c = sc.nextInt();
        double d = b*b-4*a*c;
        if (d>0){
            root1 = (-b+Math.sqrt(d))/(2*a);
            root2 = (-b-Math.sqrt(d))/(2*a);
            System.out.print("roots are real and different ");
            System.out.println("root1 = " + root1 + " and root2 = " + root2);
        }
        else if (d == 0)
        {
            root1 = root2 = -b/(2*a);
            System.out.print("roots are real and same " + root1 );
        }
        else
        {
            real = -b/(2*a);
            imaginary = Math.sqrt(-d)/(2*a);
            System.out.print("root1  = "  + real + " + " + "i" +imaginary + " and root2 = " + real + " + " + "i" + imaginary);
        }
    }
}
