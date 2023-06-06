#include <stdio.h>
/*
读取整数，直到输入0为止。输入结束后，程序输出用户输入的偶数的个数，偶数的均值，奇数的个数，奇数的均值。
*/
int main()
{
    int odd_num = 0 ;
    int even_num = 0 ;
    int average_even = 0 ;
     int average_odd = 0 ;
    int num = 0;
    

    while(1)
    {
        
        scanf("%d",&num);

        if(num ==  0)
            break;
        if(num % 2 == 0)
        {
            even_num++;
            average_even+=num;

        }
        else
        {
            odd_num++;
            average_odd+=num;

        }
    }

    average_even = average_even / even_num ;
    average_odd = average_odd / odd_num ;

    printf("偶数的个数为:%d,偶数的均值为:%d,奇数的个数为:%d,奇数的均值为:%d",even_num,average_even,odd_num,average_odd);
    putchar(10);
    return 0;

}