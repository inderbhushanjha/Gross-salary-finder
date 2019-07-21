#include <stdio.h>
#include <conio.h>

int main()
{
    float dear_all, rent, gross;
    float bs;
    printf("enter your basic salary = ");
    scanf("%f",&bs);
    dear_all=(bs*40)/100;
    rent=(bs*20)/100;
    gross=bs-(dear_all+rent);
    printf("Basic salary = %f\nDear allowance =%f\nRent = %f\nGross salary = %f\n",bs,dear_all,rent,gross);
    getch();
    return 0;

}
