#include <stdio.h>
#include <math.h>

int main()
{
    /*This section help you to calcualte the root of the qudratic eqn*/
    int a;
    int b;
    int c;
    printf("In this Program we going to find the root of a quradatic eqn \n");
    printf("Enter the coefficent of x^2: ");
    scanf("%d", &a);
    printf("Enter the cofficent of x: ");
    scanf("%d", &b);
    printf("Enter the constant Term: ");
    scanf("%d", &c);
    printf("Enter terms a: %d b : %d  c: %d", a, b, c);
    double dis = pow(b, 2) - (4 * a * c);
    if (dis>=0){
        double root1 = (-b + sqrt(dis))/(2*a);
        double root2 = (-b - sqrt(dis))/(2*a);
        printf("Aplha is = %f \n", root1);
        printf("Beta is = %f \n", root2);
        printf("Hope you enjoyed it ....");
        
    }
    if (dis<0){
        printf("\nThe Discrimant is Non-Positive\n");
        printf("So the roots are complex");
        
    }

    /*This section help to find the determinant of the martix 2by2 and 3by3*/
    int select;
    printf("\nEnter 2 for 2by2 and 3 for 3by3 Matrix: ");
    scanf("%d", &select);
    if (select=2){
        int a11;
        int a12;
        int a21;
        int a22;
        printf("\n2by2 Martix Format\n");
        printf("| a11 a12 |\n");
        printf("| a21 a22 |\n");
        printf("Enter a11 = ");
        scanf("%d", &a11);
        printf("Enter a12 = ");
        scanf("%d", &a12);
        printf("Enter a21 = ");
        scanf("%d", &a21);
        printf("Enter a22 = ");
        scanf("%d", &a22);
        printf("| %d %d |\n", a11, a12);
        printf("| %d %d |\n", a21, a22);
        int det = (a11 * a22) - (a21 * a12);
        printf("Determinant of Your matrix = %d", det);
    
    }

    if (select=3){
        int a11;
        int a12;
        int a13;
        int a21;
        int a22;
        int a23;
        int a31;
        int a32;
        int a33;
        printf("\n3by3 matrix format \n");
        printf("| a11  a12  a13 |\n");
        printf("| a21  a22  a23 |\n");
        printf("| a31  a32  a33 |\n");  
        
    } 
    if (select=3){
        int a11;
        int a12;
        int a13;
        int a21;
        int a22;
        int a23;
        int a31;
        int a32;
        int a33;
        printf("\n3by3 matrix format \n");
        printf("| a11  a12  a13 |\n");
        printf("| a21  a22  a23 |\n");
        printf("| a31  a32  a33 |\n");
        printf("Enter a11 = ");
        scanf("%d", &a11);
        printf("Enter a12 = ");
        scanf("%d", &a12);
        printf("Enter a13 = ");
        scanf("%d", &a13);
        printf("Enter a21 = ");
        scanf("%d", &a21);
        printf("Enter a22 = ");
        scanf("%d", &a22);
        printf("Enter a23 = ");
        scanf("%d", &a23);
        printf("Enter a31 = ");
        scanf("%d", &a31);
        printf("Enter a32 = ");
        scanf("%d", &a32);
        printf("Enter a33 = ");
        scanf("%d", &a33);
        printf("| %d %d %d |\n", a11, a12, a13);
        printf("| %d %d %d |\n", a21, a22, a23);
        printf("| %d %d %d |\n", a31, a32, a33);
        int det = ((a11 * a22 * a33) + (a12 * a23 * a31) + (a11 * a22 * a32) ) - ((a31 * a22 * a13) + (a32 * a23 * a11) + (a33 * a21 * a12))
        printf("Determinant of Your Matrix = %d", det)
    

    return 0;
}
