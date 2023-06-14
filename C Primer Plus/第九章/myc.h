#ifndef __MYC_H
#define __MYC_H

int min(int x , int y) ;
int max(int x , int y) ;

int min(int x ,int y)
{
    return (x > y) ? y : x ;
}

int max(int x , int y)
{
    return (x > y) ? x : y ;
}

#endif