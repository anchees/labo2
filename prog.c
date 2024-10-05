#include <stdio.h>
#include <math.h>

int main(){
    double h;
    FILE *myfile;
    printf("Enter h: ");
    scanf("%lf", &h);
    double x=-1;
    myfile = fopen("graph.txt", "w");
    while (x<2.000001){
        if (x<=1){
            fprintf(myfile, "%lf\t%lf\n", x, exp(-2*sin(x)));
            printf("%lf\t%lf\n", x, exp(-2*sin(x)));
        } else{
            fprintf(myfile, "%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
            printf("%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
        }
        x+=h;
    }
    fclose(myfile);
    // for (double x=-1; x<=2.000001 ; x=x+h){
    //     if (x<=1){
    //     fprintf(myfile, "%lf\t%lf\n", x, exp(-2*sin(x)));
    //         printf("%lf\t%lf\n", x, exp(-2*sin(x)));
    //     } else{
    //         fprintf(myfile, "%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
    //         printf("%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
    //     }
    // }
    // fclose(myfile);
    return 0;
}