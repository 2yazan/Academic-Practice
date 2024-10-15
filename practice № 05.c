// Fill the matrix M with m rows and n columns with natural numbers 
// from 1 to m * n in a spiral pattern, starting from the top-left corner 
// and moving clockwise.

#include <stdio.h>

void sort(int m, int n, int M[m][n]){
    int val = 1;
    int k = 0, l = 0;
    while (k < m && l < n){
        for (int i = l; i < n; ++i)
            M[k][i] = val++;
        k++;
        for (int i = k; i < m; ++i)
            M[i][n-1] = val++;
        n--;
        if (k < m){
            for (int i = n-1; i >= l; --i)
                M[m-1][i] = val++;
            m--;
        }
        if (l < n){
            for (int i = m-1; i >= k; --i)
                M[i][l] = val++;
            l++;
        }
    }
}
void output(int m, int n, int M[m][n]){
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    printf("enter matrix size m * n :\n");
    scanf("%d %d",&m,&n);
    int M[m][n];
    sort(m, n, M);
    output(m,n,M);
    return 0;
}
