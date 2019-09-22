#include<stdio.h>
int main ()
{
float x,t,sum;
int n,i;
printf("Enter the value n upto which sin(x) series is to be evaluated \n");
scanf("%d",&n);
printf("Enter the value x for sin(x) series is to be evaluated \n");
scanf("%f",&x);
x=(x*3.14159)/180.0;
t=x;
sum=x;
for(i=1;i<=n;i++){
t=(t*(-1)*x*x)/(2*i*(2*i+1));
sum=sum+t;
}
printf("%f",sum);
}
