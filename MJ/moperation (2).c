#include<stdio.h>
void display(int rows, int cols, int matrix[rows][cols]);
void addmatrix(int rows,int cols,int matrix1[rows][cols],int matrix2[rows][cols]);
int main() {
    int i, j, rows, cols,r2,c2;
    printf("enter number of rows");
    scanf("%d", &rows);
    printf("enter number of columns");
    scanf("%d", &cols);
    int matrix1[rows][cols];
    printf("\nenter elements");
    for (i = 0;i < rows;i++) {
        for (j = 0;j < cols;j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nmatrix 1:");
    display(rows, cols, matrix1);
    printf("enter number of rows of matrix 2");
    scanf("%d", &rows);
    printf("enter number of columns of matrix2");
    scanf("%d", &c2);
    int matrix2[r2][c2];
    printf("\nenter elements of matrix 2:");
    for (i = 0;i < rows;i++) {
        for (j = 0;j < cols;j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nmatrix 2:");
    display(r2,c2,matrix2);
    addmatrix(rows,cols,matrix1,matrix2);
    return 0;
}
void display(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("\nentered matrix");
    for (i = 0;i < rows;i++) {
        printf("\n");
        for (j = 0;j < cols;j++) {
            printf("%d\t", matrix[i][j]);
        }
}
}
void addmatrix(int rows,int cols,int matrix1[rows][cols],int matrix2[rows][cols]){
    int i,j;
    printf("\n sum of matrix");
    for(i=0;i<rows;i++){
        printf("\n");
        for (j = 0;j < cols;j++) {
            printf("%d\t", matrix1[i][j] + matrix2[i][j]);
        }

    }
}