#include <stdio.h>
#include <ctype.h>

int main()
{
    int character = 0  , words = 0 ;

    int ch ;

    while((ch = getchar()) != EOF)
    {
        if((ch <= 'Z' && ch >= 'A' ) || ( ch <= 'z' && ch <= 'a'))
            words++;
        if(ispunct (ch) != 0 || ch == ' ')
            character++;
        if( ch == '\n')
                printf("\nwords = %d,character = %d,words / count = %.2f%%\n",words , character ,  1.0 *words / (words + character)) ;


    }

    return 0 ;
}