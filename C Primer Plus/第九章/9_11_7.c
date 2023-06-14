#include <stdio.h>

int position(char ch)
{
    if(ch >='A' && ch <= 'Z')
        return ch -'A' + 1 ;
    if(ch >= 'a' && ch <= 'z')
        return ch - 'a' + 1 ;
    return -1 ;
}
int main()
{
    char ch ;

    while((ch = getchar()) != EOF)
    {
        if(getchar() == '\n')//吃掉\n
            continue;
        if(position(ch) != -1)
        {
            printf("%c = %d.\n" , ch , position(ch));

        }
        else
        {
            printf("%c is not a alphabet.\n",ch);
        }
        

    }
    return 0 ;
}