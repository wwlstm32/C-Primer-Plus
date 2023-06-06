#include <stdio.h>
/* 
程序读取输入，读到#字符停止，每行打印8个“字符——ASCII”组合。
 */
int main()
{
    char ch ;
    int count = 0;

    while((ch = getchar()) !='#')
    {
        if(count++ %8 == 0)
        {
            printf("\n");
        }
        if(ch == '\n')
            printf("'\\n'-%03d. ",ch);
        else if (ch == '\t')
            printf("'\\t'-%03d. ",ch);
        
        else printf("'%c'-%03d.  ",ch,ch);
        
    }
   
    return 0;
}