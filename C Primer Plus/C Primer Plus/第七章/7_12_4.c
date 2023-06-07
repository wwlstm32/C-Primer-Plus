#include <stdio.h>
/*
使用if...elseif语句，读取输入，读到#字符结束，用！替换.用！！替换！，最后报告替换了多少次。 
 */
int main()
{
    char ch ;
    int count = 0 ;
    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
           printf("!") ;
           count++;
        }
        else 
        {       
            if(ch == '!')
            {
                count++;
                printf("!!");
             }
            else
            {
                printf("%c",ch);
            }
          
        }

        
    }
    printf("\nTotal replace %d times",count);
    putchar(10);
    return 0;
}