#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1,n2,sum,substract,divides ,multiplies;
    printf("Enter the no for opration \n");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    printf("\n sum of two no is = %d",sum);
    substract=n1-n2;
    printf("\n substract of two no is = %d",substract);
    multiplies=n1*n2;
    printf("\n multiplies of two no is = %d",multiplies);
    divides=n1/n2;
    printf("\n divides of two no is = %d",divides);
getch();
}
