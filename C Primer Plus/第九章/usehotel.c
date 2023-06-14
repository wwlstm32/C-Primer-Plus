#include <stdio.h>
#include "hotel.h"

int main()
{
    double hotel_price ;
    int nights ; 
    int code ;

    //printf("please choose your hotel:");

    while((code = menu() ) != QUIT)
    {
        switch(code)
        {
            case 1 :    hotel_price = HOTEL1;
                        break;
            case 2 :    hotel_price = HOTEL2;
                        break;
            case 3 :    hotel_price = HOTEL3;
                        break;
            case 4 :    hotel_price = HOTEL4;
                        break;

                        

        }
        nights = getnights() ;
        showprice(hotel_price , nights);

    }

    printf("thank you and goodbye.\n");
    return 0  ;
}