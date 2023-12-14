#include <stdio.h>
#include <math.h>
#include "header/matrix.h"

void sum_of_natural_no();  // This function will help you to find the sum natural no. from 0 to __
void root_of_quadraic(); // Used to find the root of a qudratic function

int main() {
    printf("Possible Calculations\n");
    printf("Type the following no. to calculate\n");
    printf("0 = calculate root of qudratic eqn\n");
    printf("1 = calculate Determinant of matrix\n");
    printf("2 = calculate the sum of natural number\n");
    int main_select;
    printf("Enter the No. corresponding to Calc: ");
    scanf("%d", &main_select);
    if (main_select == 0) {
        printf("Root Calculations Begins\n");
        root_of_quadraic();
        
    }else if (main_select == 1){
        printf("Matric Calc Begins\n");
        Determinant();     
    }else if (main_select == 2){
        printf("Sum calc Begins \n");
        sum_of_natural_no();
    }
    return 0;
}
void sum_of_natural_no(){
    int n;
    int sum;
    printf("Enter the last term : ");
    scanf("%d", &n);
    sum = (n * (n+1))/2;
    printf("Sum of number from 1 to %d is : %d", n,sum);
}
void root_of_quadraic() {
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
        printf("\nAplha is = %f \n", root1);
        printf("Beta is = %f \n", root2);     
    } else if (dis<0){
        printf("\nThe Discrimant is Non-Positive\n");
        printf("So the roots are complex");    
    }   
}
