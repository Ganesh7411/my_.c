#include<stdio.h>
int main()
{
    float p,r,t,SI;
    printf("enter the value of p,r,t");
    scanf("%f%f",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("simple interest=%f",SI);
    return 0;
}

