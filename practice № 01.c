//The angle a is given in radians. Find its measure in degrees, minutes, and seconds.

#include <stdio.h>
#include <math.h>
#include <windows.h>

#define M_PI 3.14159265358979323846

void rad_to_deg(double rad){
    double radians = rad*180/M_PI ;
    int degree = radians;
    double r1 = radians-degree;
    int minutes = r1 * 60.0;
    double r2 = r1 - minutes/60.0;
    double seconds = r2*3600.0;
    printf("radios = %d, minute = %d, second = %.3lf"
    ,degree, minutes, seconds);
}
int main() {
    SetConsoleOutputCP(CP_UTF8);//Подключение русского языка
    int degree, minutes, seconds;
    double radians;
    printf("enter angle in radians:\n");
    scanf("%lf", &radians);
    rad_to_deg(radians);
    return 0;
}