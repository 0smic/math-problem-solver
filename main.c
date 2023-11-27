#include <stdio.h>
#include <math.h>

int main()
{
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

    return 0;
}
