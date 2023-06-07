#include  <stdio.h>
/* 
switch...case语句总是多执行一遍。
输入type时将回车键吃掉了。
 */
#define SINGLE  17850
#define HOLDER  23900
#define MARRY   29750
#define DIVORCE 14875
#define BASE_TAX    0.15
#define EXTRA_TAX   0.28

int main()
{
    char type ;
    float salary;
    float tax , taxed_salary ;
 

    do
    {
        printf("1)SINGLE    2)HOLEDER   3)MARRY 4)DIVORCE   5)QUIT\n");
        printf("please enter 1 to 5\n");
        scanf("%c",&type);

        switch (type)
        {
        case '1':
                printf("please enter your salary: ");
                scanf("%f",&salary);

                if(salary <= SINGLE)
                {
                    tax = salary * BASE_TAX ;
                    taxed_salary = salary - tax ;
                }
                else
                {
                    tax = SINGLE * BASE_TAX  + (salary - SINGLE) * EXTRA_TAX ;
                    taxed_salary = salary - tax ;

                }
                printf("your tax salary is %.2f , tax is %.2f , tax salary is %.2f\n",salary , tax , taxed_salary);
                break;
        
        case '2':
                printf("please enter your salary: ");
                scanf("%f",&salary);

                if(salary <= HOLDER)
                {
                    tax = salary * BASE_TAX ;
                    taxed_salary = salary - tax ;
                }
                else
                {
                    tax = HOLDER * BASE_TAX  + (salary - HOLDER) * EXTRA_TAX ;
                    taxed_salary = salary - tax ;

                }
                printf("your tax salary is %.2f , tax is %.2f , tax salary is %.2f\n",salary , tax , taxed_salary);
                break;

        case '3':
                printf("please enter your salary: ");
                scanf("%f",&salary);

                if(salary <= MARRY)
                {
                    tax = salary * BASE_TAX ;
                    taxed_salary = salary - tax ;
                }
                else
                {
                    tax = MARRY * BASE_TAX  + (salary - MARRY) * EXTRA_TAX ;
                    taxed_salary = salary - tax ;

                }
                printf("your tax salary is %.2f , tax is %.2f , tax salary is %.2f\n",salary , tax , taxed_salary);
                break;

          case '4':
                printf("please enter your salary: ");
                scanf("%f",&salary);

                if(salary <= DIVORCE)
                {
                    tax = salary * BASE_TAX ;
                    taxed_salary = salary - tax ;
                }
                else
                {
                    tax = DIVORCE * BASE_TAX  + (salary - DIVORCE) * EXTRA_TAX ;
                    taxed_salary = salary - tax ;

                }
                printf("your tax salary is %.2f , tax is %.2f , tax salary is %.2f\n",salary , tax , taxed_salary);
                break;
            case '5':
                    printf("The program quit\n");
                    break;

            default:
                printf("wrong type>\n");
                //break;
        }
    } while (type != '5');

    return 0 ;
    
}