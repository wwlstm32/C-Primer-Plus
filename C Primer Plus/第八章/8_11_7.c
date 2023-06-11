#include <stdio.h>


#define EXTRA_HOUR  1.5
#define BASE_TAX    0.15
#define EXTRA_TAX   0.2
#define EXCEED_TAX  0.25

void show_menu(void)
{
    char s1[] = "a) $8.75/hr";
    char s2[] = "b) $9.33/hr";
    char s3[] = "c) $10.00/hr";
    char s4[] = "d) $11.20/hr";
    char s5[] = "q) quit";

    printf("********************************************************************************\n");
    printf("%-40s",s1);
    printf("%-40s\n",s2);
    printf("%-40s",s3);
    printf("%-40s\n",s4);
    printf("%-40s\n",s5);
    printf("********************************************************************************\n");
}

void calc_salary(float base_salary , float hours)
{
    float  taxed_salary = 0;//净收入
    float salary = 0 ;//工资总额
    float tax = 0 ;//税金


    if(hours <= 30)
    {
        salary = hours * base_salary ;

        tax = salary * 0.15 ;

        taxed_salary = salary - tax ;

    }
    else if(hours <= 40)
    {
        salary = hours * base_salary ;
         
         tax = 300 * 0.15 + (salary - 300) * EXTRA_TAX ;

         taxed_salary = salary - tax ;
    }
    else
    {
        salary = 40 * base_salary + (hours - 40 ) * EXTRA_HOUR * base_salary ;

        if(salary > 450)
            tax = 300 * BASE_TAX + 150 * EXTRA_TAX + ( salary - 450 ) * EXCEED_TAX ;
        else
            tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX ;

        taxed_salary = salary - tax ;    
    }

    printf("salary = %.2f \t tax = %.2f \t taxed_salary = %.2f.\n",salary,tax,taxed_salary);

}
int main()
{
    char selected ;
    float hours  = 0 ;
    do
    {
        show_menu(); 
        scanf("%c",&selected);
        while(getchar() != '\n')
            break;
        switch(selected)
        {
            case 'a':
                    printf("you select $8.75/hr. Enter the work hours:");
                    scanf("%f",&hours);
                    calc_salary(8.75 , hours );
                    break;
             case 'b':
                    printf("you select $9.33/hr. Enter the work hours:");
                    scanf("%f",&hours);
                    calc_salary(9.33 , hours );
                    break;
            case 'c':
                    printf("you select $10.00/hr. Enter the work hours:");
                    scanf("%f",&hours);
                    calc_salary(10.00 , hours );
                    break;
            case 'd':
                    printf("you select $11.20/hr. Enter the work hours:");
                    scanf("%f",&hours);
                    calc_salary(11.20 , hours );
                    break;
            case 'q':
                    break;
            default:
                    printf("Error selected! please enter a b c d or q\n");
                    getchar();
                    break;

        }
    }while(selected != 'q');

    return 0;
                           
}