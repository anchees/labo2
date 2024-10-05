#include <stdio.h>
#include <math.h>

int main(){
    double h;
    FILE *graph;
    printf("Enter h: ");
    scanf("%lf", &h);
    graph = fopen("graph.txt", "w");
    double x=-1;
    while (x<2.000001){
        if (x<=1){
            fprintf(graph, "%lf\t%lf\n", x, exp(-2*sin(x)));
            printf("%lf\t%lf\n", x, exp(-2*sin(x)));
        } else{
            fprintf(graph, "%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
            printf("%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
        }
        x+=h;
    }
    fclose(graph);
    // for (double x=-1; x<2.000001 ; x=x+h){
    //     if (x<=1){
    //         fprintf(graph, "%lf\t%lf\n", x, exp(-2*sin(x)));
    //         printf("%lf\t%lf\n", x, exp(-2*sin(x)));
    //     } else{
    //         fprintf(graph, "%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
    //         printf("%lf\t%lf\n", x, pow(x,2)-cos(x)/sin(x));
    //     }
    // }
    // fclose(graph);
    return 0;
}