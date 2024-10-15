// For a given epsilon (ε), find the smallest integer n such that (2^n) / (n!) < ε.
// Display all terms of the sequence from the 1st to the n-th term.

#include <stdio.h>
#define E  0.00001

int sequence(int n){
    int i;
    double power = 1.0, fact = 1.0, term;
    for(i = 1; i <= n; i++) {
        power *= 2;
        fact *= i;
    }
    term = power / fact;
    printf("\n%d- %lg", n, term);
    if (term < E)
        return n;
    return sequence(n+1);
}
int main(){
    int min = sequence(1);
    printf("\n");
    printf("n = %d", min);
    return 0;
}
