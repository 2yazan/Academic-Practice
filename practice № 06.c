// A saddle point in a matrix is an element that is both the largest in its column 
// and the smallest in its row. There can be multiple saddle points. 
// In the matrix A with dimensions m x n, find all saddle points or determine 
// that there are none.

#include <stdio.h>

void input(int m,int n,int A[m][n]){
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&A[i][j]);
        }
    }
}
void output(int m,int n,int A[m][n]){
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
void findsaddlepoints(int m,int n,int A[m][n]){
    int min,max,f=0;
    for (int i=0;i<n;i++){
        min=A[i][0];
        for (int x=1;x<m;x++){
            if (A[i][x]<min){
                min=A[i][x];
            }
        }
        for(int j=0;j<n;j++){
            if (A[i][j]==min){
                max=A[0][j];
                for (int y=1;y<n;y++){
                    if (A[y][j]>max){
                        max= A[y][j];
                    }
                }
                if (A[i][j]==max){
                    printf("saddle point: \n");
                    printf( "A[%d][%d]=%d\n", i+1, j+1, A[i][j] );
                    f=1;
                }
            }
        }
    }
    if(!f)
        printf("The matrix has no saddle points!\n");
}
int main(){
    int m,n;
    printf("enter the size of the matrix m*n :\n");
    scanf("%d %d",&m,&n);
    int A[m][n];
    printf("enter the elements of the matrix :\n");
    input(m,n,A);
    output(m,n,A);
    findsaddlepoints(m,n,A);
    return 0;
}
