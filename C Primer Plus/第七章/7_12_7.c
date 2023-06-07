#include <stdio.h>

#define BASE_SALARY 10.00
#define EXTRA_HOUR  1.5
#define BASE_TAX    0.15
#define EXTRA_TAX   0.2
#define EXCEED_TAX  0.25


int main()
{
    float hour = 0 ;
    float  taxed_salary = 0;//净收入
    float salary = 0 ;//工资总额
    float tax = 0 ;//税金

    printf("Please enter number of hours worked in a week : ");

    scanf("%f",&hour);

    if(hour <= 30)
    {
        salary = hour * BASE_SALARY ;

        tax = salary * 0.15 ;

        taxed_salary = salary - tax ;

    }
    else if(hour <= 40)
    {
        salary = hour * BASE_SALARY ;
         
         tax = 300 * 0.15 + (salary - 300) * EXTRA_TAX ;

         taxed_salary = salary - tax ;
    }
    else
    {
        salary = 40 * BASE_SALARY + (hour - 40 ) * EXTRA_HOUR * BASE_SALARY ;

        if(salary > 450)
            tax = 300 * BASE_TAX + 150 * EXTRA_TAX + ( salary - 450 ) * EXCEED_TAX ;
        else
            tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX ;

        taxed_salary = salary - tax ;    
    }

    printf("salary = %.2f \t tax = %.2f \t taxed_salary = %.2f.\n",salary,tax,taxed_salary);

    return 0 ;
}