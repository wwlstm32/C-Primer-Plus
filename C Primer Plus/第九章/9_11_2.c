#include <stdio.h>

void chline(char ch , int i , int j)
{
    int row  , line ;
    for(row = 1 ;row <= j ;row++)
    {
        for(line = 1 ; line <= i ; line++)
            putchar(ch);
        putchar(10);
    }
}

int main()
{
    char ch ;
    int i , j ;
    while(1)
    {
        scanf("%c",&ch);
        scanf("%d %d",&i , &j);
        chline(ch , i , j) ;

    }
}