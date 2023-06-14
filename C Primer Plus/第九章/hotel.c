#include "hotel.h"
#include <stdio.h>
/*
int menu(void)
{
    int status  ,  code ;
    printf("\n%s%s\n",STARS,STARS);
    printf("1) Fairfield Arms       2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza    4) The Stockton\n");
    printf("5) QUIT\n");
    printf("\n%s%s\n",STARS,STARS);
    while((status = scanf("%d",&code)) != 1 || (code < 1 || code > 5))
    {
        if(status != 1)
            scanf("%*s");
        printf("Please enter interger from 1 t0 5.\n");
    }
    return code  ;

}
*/
int menu(void)
{
    int status  ,  code1 ;
    printf("\n%s%s\n",STARS,STARS);
    printf("1) Fairfield Arms       2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza    4) The Stockton\n");
    printf("5) QUIT\n");
    printf("\n%s%s\n",STARS,STARS);
    while((status = scanf("%d",&code1)) != 1 || (code1 < 1 || code1 > 5))
    {
        if(status != 1)
            scanf("%*s");
        printf("Please enter interger from 1 t0 5.\n");
    }
    return code1 ;

}
int getnights(void)
{
    int nights ;
    int status ; 
    printf("Please enter your Required days:");
    while((status = scanf("%d",&nights)) != 1 || (status <= 0))
    {
        if(status != 1)
            scanf("%*s");
        printf("Please enter an integer greater than 0 , such as 2.\n ");
    }
}
void showprice(double rate , int night)
{
    double total ;
    double factor = 1.0 ;
    int n ;

    for(n = 1 ; n <= night ; n++)
    {
        total += rate * factor ;
        factor *= DISCOUNT;
    }
    printf("the total cost will be $%.2f.\n",total);
}