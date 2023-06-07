#include <stdio.h>

int main()
{
    int max = 0 ;
    int is_prime ;
    int count = 0 ;
    printf("Please enter a number:");

    scanf("%d",&max);
    for(int number = 2 ; number <= max ; number++)
    {   
        is_prime = 1 ;

        for(int i = 2 ; i * i <= number ; i++)
        {
            if( number % i  == 0)
          {
                  is_prime = 0;
            break;
          }
        }
        if(is_prime == 1)
        {
            printf("%d ",number);
            count++;
        }
    }
    printf("\ncount = %d\n",count);
    return 0 ;
}