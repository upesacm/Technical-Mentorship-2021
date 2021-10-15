import java.util.Scanner;

public class Task3 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);


        // value a, b, and c
        double a,b,c;
        a= sc.nextDouble();
        b= sc.nextDouble();
        c= sc.nextDouble();
        double root1, root2;
    
        
        double determinant = b * b - 4 * a * c;
    
        if (determinant > 0) {
    
         
          root1 = (-b + Math.sqrt(determinant)) / (2 * a);
          root2 = (-b - Math.sqrt(determinant)) / (2 * a);
          System.out.println("root are real and different");
    
          System.out.printf("%.1f , %.1f", root1, root2);
        }
    
        
        else if (determinant == 0) {
    
          
          root1 = root2 = -b / (2 * a);
          System.out.println("root are real and same");
    
          System.out.printf("%.1f ", root2);
        }
    
        
        else {
    
          
          double real = -b / (2 * a);
          double imaginary = Math.sqrt(-determinant) / (2 * a);
          System.out.println("root are complex");
          System.out.format("%.2f+%.2fi\n%.2f-%.2fi", real, imaginary,real, imaginary);
          
        }
        sc.close();
      }
    
}
