#include <stdio.h>

int main()
{
    int count = 0 ;

    int ch ; 

    while((ch = getchar()) != EOF)
    {
        if(count % 10 == 0)
        {
            count++;
            putchar(10);
        }

        if(ch =='\n')
        {
            printf("\\n|%d ",ch);

        }
        if(ch =='\t')
        {
            printf("\\t|%d ",ch);
        }
        if((ch < ' ') && (ch > 0))
        {
            printf("^%c|%d ", ch , ch+64 );

        }
        else
        {
            printf("%c|%d ", ch , ch) ;

        }
    }
    return 0 ;
}