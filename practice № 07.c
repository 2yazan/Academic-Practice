// For natural numbers not exceeding a given k, check the divisibility rule for 9 
// (the sum of the digits of a number divisible by 9 is also divisible by 9). 
// Output the last m such numbers (where m << k).

#include <stdio.h>

int Sum(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int divisibility (int value){
    int digits_sum = Sum(value);
    if (digits_sum % 9 ==0)
        return 1;
    return 0;
}
void output(int k,int m){
    for (int i = k; i > 0 && m > 0; i--) {
        if (1 == divisibility(i)) {
            m = m - 1;
            printf("%d ", i);
        }
    }
}
int main(){
    int k,m;
    printf("enter k :\n");
    scanf("%d", &k);
    printf("enter m :\n");
    scanf("%d", &m);
    printf("numbers that can be divided by 9 :\n");
    output(k,m);
    return 0;
}
