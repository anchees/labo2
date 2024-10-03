#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double h;
    printf("Enter h: ");
    // scanf("%lf",&h);
    double x=-1;
    while (x<2.000001){
        if (x<=1){
            printf("%lf\t%lf\n", x, exp(-2*sin(x)));
        } else{
            printf("%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
        }
        x+=0.1;
    }


    // for (double x=-1; x<=2.000001 ; x=x+h){
    //     if (x<=1){
    //         printf("%lf\t%lf\n", x, exp(-2*sin(x)));
    //     } else{
    //         printf("%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
    //     }
    // }

    return 0;
}