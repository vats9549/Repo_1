#include<stdio.h>
int sum (int n)
{int sum=0;
while(n > 0 || sum > 9)
{if(n==0)
{n=sum;
sum=0;}
sum=sum+n%10;
n = n/10;}
return sum;}
int main()
{
int n,t;
printf("Enter number: ");
scanf("%d", &n);
t = sum(n);
printf("1. Sum is %d\n",t);


int e,x=0;
printf("enter number: ");
scanf("%d", &e);
while(e>0)
{if(e%9==0)
{
    x=9;
    e=0;

}
else
{
  x=x+e%9;
  e=0;
}}
    printf("\n2. Sum is %d",x);
}
