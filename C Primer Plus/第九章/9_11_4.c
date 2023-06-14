#include <stdio.h>

double Get_Harmonic_Mean(double  a , double b)
{
    double Count_Backwards_Sum ;
    double answer  ;

    Count_Backwards_Sum = ( (1.0 / a)  + (1.0 / b) ) / 2 ;
    answer = 1.0 / Count_Backwards_Sum ;

    return answer ;

}
int main()
{
    double i , j ;
    double answer ;
    printf("please enter two double:");
    scanf("%lf %lf" , &i , &j);

    printf("answer = %.2lf.\n", answer = Get_Harmonic_Mean( i , j));

    return 0 ;
}