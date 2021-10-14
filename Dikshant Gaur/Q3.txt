Q3. Given a quad eqn print the type of its roots. If roots are real print the type of roots.

#include<stdio.h>
#include<math.h>
int main() {double a, b, c, d, r1, r2, e, f;
printf("Enter coefficients a, b and c: ");
scanf("%lf %lf %lf", &a, &b, &c);
d=b*b-4*a*c;
if (d>0){
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("The roots are real and unequal where alpha= %.2lf and beta=%.2lf", r1, r2);}
else if (d==0) {
r1=r2=-b/(2*a);
printf("The roots are real and equal =%.2lf;", r1);}
else {e=-b/(2*a);
f=sqrt(-d)/(2 * a);
printf("The roots are unreal and unequal where alpha=%.2lf+%.2lfi and beta=%.2f-%.2fi", e, f, e, f);}
return 0;} 
