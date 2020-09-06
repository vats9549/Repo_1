#include<stdio.h>
int aVeryBigSum(int ar_count, int *p) {
int i,x=0;
for(i=0;i<ar_count;i++){
    x=x+ p[i];
}
return x;
}
int main()
{
int ar_count,i;
int ar[100],sum,*p;
p=&ar;
scanf("%d",&ar_count);
for(i=0;i<ar_count;i++){
    scanf("%d",&ar[i]);
}
sum=aVeryBigSum(ar_count,*p);
printf("%d",sum);}
