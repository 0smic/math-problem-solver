#include "matrix.h"
#include <stdio.h>
void Determinant(){
    int select;
    printf("Format of Matrix to Find Determinant\n");
    printf("Type 2 for 2by2\n");
    printf("Type 3 for 3by3\n");
    printf("Enter the No. corresponding: ");
    scanf("%d", &select);
    if (select==2){
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
    }else if (select==3){
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
        int det = ((a11 * a22 * a33) + (a12 * a23 * a31) + (a11 * a22 * a32) ) - ((a31 * a22 * a13) + (a32 * a23 * a11) + (a33 * a21 * a12));
        printf("Determinant of Your Matrix = %d", det);
    }
}
