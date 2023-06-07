#include <stdio.h>
/* 
程序读取输入至#结束，报告ei出现的个数。
 */
int main()
{
    char ch ;
    int count = 0 ;
    int flag = 0 ;

    while((ch = getchar()) != '#')
    {
       switch(ch)
       {
            case 'e':
                    flag = 1 ;
                    break;
            case 'i':
                    if(flag == 1)
                        count++;
                    break;
            default:
                    flag = 0;
                    break;
       }
        
    }

    printf("The number of occurrences of ei is %d. \n",count);
   
}