#include <stdio.h>

#define MAX 10
int main() 
{
    int matrix[20][20], transpose[20][20];
    int rows, cols, i, j;
  
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

   
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
   
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }
  
    printf("Original Matrix:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
   
    printf("Transposed Matrix:\n");
    for(i = 0; i < cols; i++) 
    {
        for(j = 0; j < rows; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
