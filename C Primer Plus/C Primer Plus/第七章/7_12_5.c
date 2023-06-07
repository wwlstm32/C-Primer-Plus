#include <stdio.h>
/* 
使用switch... case语句实现
 */
int main()
{
     char ch ;
    int count = 0 ;

    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.' : 
            {
                printf("!") ;

                count++;
                break;
            }

            case '!':
            {
                printf("!!");

                count++;

                break;
            }

            default :
            {
                printf("%c",ch);

                break;
            }
        }

    }

    printf("\nTotal replace %d times",count);
}