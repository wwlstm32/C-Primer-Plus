#include <stdio.h>
/* 
程序读取输入，读到#字符停止，然后报告读取的空格数，换行符数和所有其他字符的数量。
space - 空格
new_line - 换行数
other_string - 其他字符
 */
int main()
{
    char ch;
    int space = 0 ;
    int new_line = 0 ;
    int other_string = 0 ;

    while(( ch = getchar() ) != '#')
    {
/*      if(ch == ' ')
            space++;
        else if(ch == '\n')
            new_line++;
        else 
            other_string++;
 */

/*         if(ch == ' ')
        {
            space++ ;
        }
        else
        {
            if(ch == '\n')
            {
                new_line++;
            }
            else        
            {
                other_string++;
            }
        }
 */

        switch (ch)
        {
        case ' ': space++ ;
            /* code */
            break;
        case '\n': new_line++;
            break;
        
        default: other_string++;
            break;
        }

    }  
   
    printf("space = %d , new_line = %d , other_string = %d",space,new_line,other_string);
     printf("\n"); 
    return 0;
}