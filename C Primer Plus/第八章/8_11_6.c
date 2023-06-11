#include <stdio.h>
#include <ctype.h>

char get_frist(void)
{
    char ch ; 
    while(1)
    {
        ch = getchar();
        if( !(ch == '\t' || ch == ' ' || ch == '\n'))
            break;
    }

    return ch ;
}
int main()
{
    char ch ;

    printf("char = %c\n",    ch = get_frist());
    return 0 ;
}