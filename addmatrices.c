
#include <stdio.h>
#include<stdlib.h>
int main()
{
 int rows1, cols1, rows2, cols2,i, j,rows_sum,cols_sum;
 int mat1[5][5] , mat2[5][5], sum[5][5];
 printf("Enter the number of rows in the first matrix: ");
 scanf("%d", &rows1); 
 printf("Enter the number of cols in the first matrix: ");
 scanf("%d", &cols1); 
 printf("Enter the number of rows in the second matrix: ");
 scanf("%d", &rows2);
 printf("Enter the number of cols in the second matrix: ");
 scanf("%d", &cols2); 
 if(rows1 !=rows2 || cols1 != cols2)
 { 
 printf ("The number of rows and cols of both the matrices should be same\n");
 exit(0);
 }
 rows_sum=rows1; 
 cols_sum=cols1; 
 printf("Elements of first matrix : \n");
 for (i = 0; i < rows1; i++)
 for (j = 0; j < cols1; j++)
 scanf("%d", &mat1[i][j]); 
 printf("Elements of second matrix : \n");
 for (i = 0; i < rows2; i++)
 for (j = 0; j < cols2; j++)
 scanf("%d", &mat2[i][j]); 
 for (i = 0; i < rows_sum; i++) 
 {
 for (j = 0; j < cols_sum; j++) 
 {
 sum[i][j] = mat1[i][j] + mat2[i][j]; 
 } 
 }
 printf("Sum of entered matrices : \n");
 for (i = 0; i < rows_sum; i++)
 {
 printf("\n");
 for (j = 0; j < cols_sum; j++)
 printf("%d\t", sum[i][j]);
 }
 return 0;
}
