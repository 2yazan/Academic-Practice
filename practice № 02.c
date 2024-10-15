//A triangle is given by the lengths of its sides: a, b, and c. Determine whether it is obtuse, right, or acute

#include <stdio.h>

void check(int a,int b,int c){
    double A = b * b + c * c - a * a;
    double B = c * c + a * a - b * b;
    double C = a * a + b * b - c * c;
    if (A < 0 || B < 0 || C < 0)
        printf("The triangle is obtuse-angled");
    else if (A == 0 || B == 0 || C == 0)
        printf("The triangle is right-angled");
    else
        printf("The triangle is acute-angled");
}

int main(){
    int a,b,c;
    printf("Enter the sides of the triangle: :\n");
    scanf("%d %d %d",&a,&b,&c);
    check(a,b,c);
    return 0;
}
