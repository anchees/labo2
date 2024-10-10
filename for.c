#include <stdio.h>
#include <math.h>


int main(){
    double h;
    FILE *graph;
    printf("Enter h: ");
    scanf("%lf", &h);
    graph = fopen("graph.txt", "w");
        for (double x=-1; round(x*1000000)/1000000<=2 ; x=x+h){
        if (x<=1){
            fprintf(graph, "%.6lf\t%.6lf\n", x, exp(-2*sin(x)));
            printf("%.6lf\t%.6lf\n", x, exp(-2*sin(x)));
        } else{
            fprintf(graph, "%.6lf\t%.6lf\n", x, pow(x,2)-cos(x)/sin(x));
            printf("%.6lf\t%.6lf\n", x, pow(x,2)-cos(x)/sin(x));
        }
    }
    fclose(graph);
    return 0;
}