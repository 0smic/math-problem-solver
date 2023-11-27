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
    printf("\n3by3 matrix format \n ");
    printf("| a11  a12  a13 |\n");
    printf("| a21  a22  a23 |\n");
    printf("| a31  a32  a33 |\n");
    printf("\n2by2 Martix Format\n");
    printf("| a11 a12 |\n");
    printf("| a21 a22 |\n");
    printf("\nEnter 2 for 2by2 and 3 for 3by3 Matrix: ");
    scanf("%d", &select);
    if (select=2){
        printf("It worked");
    }
    

    return 0;
}
