/*************************************************
Finding roots of a quadratic equation
**************************************************/


#include <math.h>
#include <stdio.h>
#include <conio.h>
 
void main()  
{  
    float a, b, c, det, root1, root2, real, img;  

    printf("\n Enter the value of coefficient x, y and z: \n ");  
    scanf("%f %f %f", &x, &y, &z);  
 
    det = b * b - 4 * a * c;      
    //conditions for real and different roots  
    if (det > 0)  
    {  
    root1 = (-b + sqrt(det)) / (2 * a);  
    root2 = (-b + sqrt(det)) / (2 * a);  
    printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2);  
    }  
    else if (det == 0)  
    {  
        root1 = root2 = -b / (2 * a); // both roots are equal;  
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", root1, root2);  
    }  
    // if det < 0, both roots are real and imaginary  
    else {  
        real = -y / (2 * x);  
        img = sqrt(-det) / (2 * x);  
        printf("\n value of root1 = %.2f + %.2fi and value of root2 = %.2f - %.2fi ", real, img, real, img);  
    }  
    getch();  
    }  