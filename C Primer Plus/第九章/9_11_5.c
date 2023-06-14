#include <stdio.h>

void larger_of(double *x , double *y)
{
        if(*x > *y)
            *y = *x ;
        else 
            *x = *y ;
        return ;
}

int main()
{
    double x , y ;
    printf("Please enter two Fractional part:");
    scanf("%lf %lf" , &x ,&y);
    larger_of(&x  , &y );
    printf("x = %.2lf y = %.2f.\n" , x , y); 
    return 0;
}