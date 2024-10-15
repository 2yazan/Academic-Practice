// Perform the transposition of a rectangular matrix A (m, n) where m != n 
// without allocating an additional array to store the result. 
// Represent the matrix as a one-dimensional array.

#include<stdio.h>
#include<stdlib.h>

void input(int m,int n,int **A){
    for(int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            printf("A[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}
void original(int m,int n,int **A){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
void transposition(int m,int n,int **A){
    for(int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    printf("enter the size of matrix m*n :\n");
    scanf("%d %d",&m, &n);
    int **A= (int**) malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
        A[i]=(int*) malloc(n*sizeof(int*));
    printf("enter the elements of the matrix:\n");
    input(m,n,A);
    printf("The resulting matrix :\n");
    original(m,n,A);
    printf("Result of transposition:\n");
    transposition(m,n,A);
    for(int i=0;i<m;i++)
        free(A[i]);
    free(A);
    return 0;
}
