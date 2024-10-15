// Arrange the elements of the one-dimensional array A (with n * n elements) 
// row by row into the matrix B of size n x n.

#include <stdio.h>
#define N 3

void input(int array[N*N]){
    for(int i=0; i<N*N; i++){
        printf("array[%d] =",i);
        scanf("%d",&array[i]);
    }
}
void sort(int array[N*N],int array2[N][N]){
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            array2[i][j] = array[i*N+j];
}
void output(int array2[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++) {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int array[N*N], array2[N][N];
    input(array);
    sort(array,array2);
    output(array2);
    return 0;
}
