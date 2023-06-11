#include <stdio.h>

 int main()
 {
    int high = 100 ;
    int low = 1 ;
    int guess = ( high + low ) / 2 ;
    int ch  ;
    printf("It is %d ?\n",guess);
    while((ch = getchar()) != 'y' )
    {
        if( ch == 'h')
        {
            high = guess - 1 ;
            guess = ( low + high ) / 2 ;

        }
        if( ch == 'l')
        {
            low = guess + 1 ;
            guess = ( low + high ) / 2;
            
        }
            printf("It is %d ?\n",guess);

        while((ch = getchar()) != '\n')
            continue;
    }  
    return 0 ;
 }