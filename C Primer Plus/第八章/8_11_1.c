#include <stdio.h>

int main()
{
    int ch ; 
    int count = 0 ;
    while((ch = getchar()) != EOF)
        count++;
    printf("count = %d.\n",count);

    return 0 ;
}