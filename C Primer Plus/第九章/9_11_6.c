#include <stdio.h>

void Compare (double *x , double *y , double *z)
{
    double tmp ;

    if(*x  > *y)
    {
        tmp = *x ;
        *x = *y ;
        *y = tmp ; 
    }
    if(*x > *z)
    {
          tmp = *x ;
        *x = *z ;
        *z = tmp ; 
    }
    if(*y > *z)
    {
         tmp = *y ;
        *y = *z ;
        *z = tmp ; 
    }
}
int main()
{
    double x , y ,z ;
    printf("Please enter three Fractional part:");
    scanf("%lf %lf %lf" , &x , &y , &z);
    printf("x = %.2lf y = %.2lf z = %.2lf\n" , x , y ,z ); 
    Compare(&x , &y , &z);
    printf("x = %.2lf y = %.2lf z = %.2lf\n" , x , y ,z );
    return 0 ;
}