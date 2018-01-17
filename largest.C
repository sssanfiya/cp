#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("\n %d is largest than %d and %d",&a,&b,&c);
}
if((b>a)&&(b>c))
{
printf("\n %d is largest than %d and %d",&a,&b,&c);
}
if((c>a)&&(c>b))
{
printf("\n %d is largest than %d and %d",&a,&b,&c);
}
return 0;
}
