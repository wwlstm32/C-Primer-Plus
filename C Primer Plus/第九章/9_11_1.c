#include <stdio.h>

double min(double x , double y)
{
    
    return (x > y) ? y : x ;
}
int main()
{
    double x , y ;

    while((scanf("%lf %lf",&x,&y)) == 2)
        printf("The lesser or %.2lf and %.2lf is %.2lf.\n",x,y,min(x,y));

    return 0;
}