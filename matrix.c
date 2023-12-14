#include "header/matrix.h"
#include <stdio.h>
void Determinant(){
    int select;
    printf("Format of Matrix to Find Determinant\n");
    printf("Type 2 for 2by2\n");
    printf("Type 3 for 3by3\n");
    printf("Enter the No. corresponding: ");
    scanf("%d", &select);
    if (select==2){
        int matrix[2][2];
        int row;
        int coloum;
        printf("\n2by2 Martix Format\n");
        printf("| a11 a12 |\n");
        printf("| a21 a22 |\n");
        for(row=0;row<2;row++){
            for(coloum=0;coloum<2;coloum++){
                printf("Enter a%d%d : ", row+1,coloum+1);
                scanf("%d", &matrix[row][coloum]);
            }
        }
        for(row=0;row<2;row++){
            printf("| ");
            for(coloum=0;coloum<2;coloum++){
                printf("%d ",matrix[row][coloum]);
            }
            printf("|\n");
        }
        int det = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
        printf("Determinant of Your matrix = %d", det);
    }else if (select==3){
    int row;
    int coloum;
    int matrix[3][3];
    printf("\n3by3 matrix format \n");
    printf("| a11  a12  a13 |\n");
    printf("| a21  a22  a23 |\n");
    printf("| a31  a32  a33 |\n");
    for(row=0;row<3;row++){
        for(coloum=0;coloum<3;coloum++){
            printf("Enter a%d%d:",row + 1,coloum + 1);
            scanf("%d", &matrix[row][coloum]);
        }
    }
    for(row=0;row<3;row++){
        printf("| ");
        for(coloum=0;coloum<3;coloum++){
            printf("%d ", matrix[row][coloum]);
        }
        printf("|\n");
    }
    int det = ((matrix[0][0] * matrix[1][1] * matrix[2][2]) + 
           (matrix[0][1] * matrix[1][2] * matrix[2][0]) + 
           (matrix[0][2] * matrix[1][0] * matrix[2][1])) - 
          ((matrix[2][0] * matrix[1][1] * matrix[0][2]) + 
           (matrix[2][1] * matrix[1][2] * matrix[0][0]) + 
           (matrix[2][2] * matrix[1][0] * matrix[0][1]));
    printf("Determinant of Your Matrix = %d", det);
    }
}
