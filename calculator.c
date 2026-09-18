#include<stdio.h>
int main()
{
    int n1,n2,sum,sub;
    printf("enter first number: ");
    scanf("%d",&n1);
    printf("enter second number: ");
    scanf("%d",&n2);
    sum=n1+n2;
    sub=n2-n1;
    printf("sum is=%d\n and sub is=%d\n",sum,sub);
    return 0;
}