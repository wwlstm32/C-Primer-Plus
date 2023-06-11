#include <stdio.h>

int main()
{
    int capital_count = 0 ;

    int low_count =  0 ;
    int ch  ;
    while((ch = getchar()) != EOF)
    {
       
        
            if((ch > 'A') && (ch < 'Z'))
                capital_count++;
            if((ch > 'a') && (ch < 'z'))
                low_count++;
       if(ch == '\n')
       {
            printf("capital_count = %d low_count = %d \n", capital_count , low_count);
            capital_count = 0 ;
            low_count = 0 ;
       }
    }

    

   
    return 0 ;
}