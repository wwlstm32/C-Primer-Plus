#include <stdio.h>

void chline(char ch , int i , int j)
{
    int row  , line ;
    for(row = 1 ;row <= i ;row++)
    {
        for(line = 1 ; line <= j ; line++)
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
        printf("please enter a char:");
        scanf("%c",&ch);
        printf("Please enter two integers, one for the row number and one for the column number: ");
        scanf("%d %d",&i , &j);
        chline(ch , i , j) ;
        while(getchar() != '\n')
            break;

    }
}